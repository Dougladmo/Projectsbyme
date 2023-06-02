from django.db import models


class Usuario(models.Model):
    Nome = models.CharField(max_length=100)
    Email = models.EmailField()
    Senha = models.CharField(max_length=64)

    def __str__(self) -> str:
        return self.Nome
