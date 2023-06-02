from django.shortcuts import render


def delivery(request):
    if request.session.get('usuario'):
        return render(request, ("delivery.html"))
    else:
        return redirect('/auth/login/?status=2')

