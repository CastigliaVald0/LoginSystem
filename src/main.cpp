#include "../include/iniciosesion.h"

int main() {
    int opcion = 0;
    Usuario u;
    string user, pass;

    strcrear(u.username);
    strcrear(u.password);
    strcrear(user);
    strcrear(pass);

    do {
        printf("\n1. Registrarse\n");
        printf("2. Iniciar Sesion\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar(); 

        switch (opcion) {
            case 1:
                printf("Ingrese nombre de usuario: ");
                scan(u.username);
                printf("Ingrese contraseña: ");
                scan(u.password);
                if (ContarCaracteres(u) < 8)
                {
                    printf("La password debe contener minimo 8 caracteres");
                }else
                RegistrarUsuario(u);
                break;

            case 2:
                printf("Ingrese nombre de usuario: ");
                scan(user);
                printf("Ingrese contraseña: ");
                scan(pass);

                if (IniciarSesion(user, pass)) {
                    printf("Inicio de sesión exitoso. ¡Bienvenido!\n");
                } else {
                    printf("Usuario o contraseña incorrectos.\n");
                }
                break;

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 3);

    strdestruir(u.username);
    strdestruir(u.password);
    strdestruir(user);
    strdestruir(pass);

    return 0;
}
