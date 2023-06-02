from django.urls import path
from . import views

urlpatterns = [
    path('', views.reservas, name='reserva'),
    path('valida_reserva', views.valida_reserva, name='valida_reserva'),
]