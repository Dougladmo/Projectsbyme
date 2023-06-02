from django.contrib import admin
from django.urls import include, path

urlpatterns = [
    path('', include('main.urls')),
    path('home/', include('home.urls')),
    path('auth/', include('usuarios.urls')),
    path('reservas/', include('reservas.urls')),
    path('cardapio/', include('cardapio.urls')),
    path('delivery/', include('delivery.urls')),
    path('admin/', admin.site.urls),
]
