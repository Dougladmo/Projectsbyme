from django.shortcuts import render
from django.http import HttpResponse
from .models import Usuario
from django.shortcuts import redirect
from hashlib import sha256

def login(request):
    status = request.GET.get('status')
    return render(request, 'login.html', {'status': status})


def register(request):
    status = request.GET.get('status')
    return render(request, 'register.html', {'status': status})

def valida_cadastro(request):
    Nome = request.POST.get('Nome')
    Senha = request.POST.get('Senha')
    Email = request.POST.get('Email')

    usuario = Usuario.objects.filter(Email=Email)

    if len(Nome.strip()) == 0 or len(Email.strip()) == 0:
        return redirect('/auth/register/?status=1')

    if len(Senha) < 8:
        return redirect('/auth/register/?status=2')

    if len(usuario) > 0:
        return redirect('/auth/register/?status=3')

    try:
        Senha = sha256(Senha.encode()).hexdigest()
        usuario = Usuario(Nome=Nome, Senha=Senha,Email=Email)
        usuario.save()
        return redirect('/auth/login/?status=0')
    except:
        return redirect('/auth/register/?status=4')

def validar_login(request):
    Email = request.POST.get('Email')
    Senha = request.POST.get('Senha')

    Senha = sha256(Senha.encode()).hexdigest()

    usuario = Usuario.objects.filter(Email=Email).filter(Senha=Senha)

    if len(usuario) == 0:
        return redirect('/auth/login/?status=1')
    elif len(usuario) > 0:
        request.session['usuario'] = usuario[0].id
        return redirect(f'/home/')

    return HttpResponse(f"{Email} {Senha}")


def sair(request):
    request.session.flush()
    return redirect('/auth/login/')
