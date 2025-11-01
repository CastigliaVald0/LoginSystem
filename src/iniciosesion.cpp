#include "iniciosesion.h"

boolean IniciarSesion(string username, string password) {
    FILE *archivo = fopen("usuarios.txt", "r");
    if (archivo == NULL) {
        printf("No hay usuarios registrados aún.\n");
        return FALSE;
    }

    Usuario temp;
    strcrear(temp.username);
    strcrear(temp.password);

    boolean encontrado = FALSE;
    
    while (fscanf(archivo, "%s %s", temp.username, temp.password) == 2) {
        if (streq(temp.username, username) && streq(temp.password, password)) {
            encontrado = TRUE;
            break;  
        }
    }

    fclose(archivo);
    return encontrado;
}

