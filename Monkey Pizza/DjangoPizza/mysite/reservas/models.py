from django.db import models

class Reservas(models.Model):
    qnt_pessoas = models.IntegerField()
    data = models.DateField()
    horario = models.TimeField()
    mesa_numero = models.IntegerField()
    resp_nome = models.CharField(max_length=100)

    def __str__(self) -> str:
        return self.resp_nome