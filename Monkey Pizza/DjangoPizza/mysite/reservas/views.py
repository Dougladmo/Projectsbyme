from django.shortcuts import render
from django.shortcuts import redirect
from .models import Reservas


def reservas(request):
    if request.session.get('usuario'):
        status = request.GET.get('status')
        return render(request, 'reserva.html', {'status': status})
    else:
        return redirect('/auth/login/?status=2')

def valida_reserva(request):
    qnt_pessoas = request.POST.get('qnt_pessoas')
    data = request.POST.get('data')
    horario = request.POST.get('hora')
    resp_nome = request.POST.get('nome')
    mesa_numero = request.POST.get('num_mesa')

    reservas = Reservas.objects.filter(mesa_numero=mesa_numero)

    if len(resp_nome.strip()) == 0 or mesa_numero.strip == 0 or qnt_pessoas == 0:
        return redirect('/reservas/?status=1')

    try:
        reserva = Reservas(qnt_pessoas=qnt_pessoas, data=data, horario=horario, resp_nome=resp_nome, mesa_numero=mesa_numero)
        reserva.save()

        return redirect('/reservas/?status=0')
    except:
        return redirect('/reservas/?status=4')

