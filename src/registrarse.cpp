#include "registrarse.h"

boolean ExisteUsuario(string username) {
    FILE *archivo = fopen("usuarios.txt", "r");
    if (archivo == NULL) {
        return FALSE; 
    }

    Usuario temp;
    strcrear(temp.username);
    strcrear(temp.password);

    while (fscanf(archivo, "%s %s", temp.username, temp.password) == 2) {
        if (streq(temp.username, username)) {
            fclose(archivo);
            return TRUE;
        }
    }

    fclose(archivo);
    return FALSE;
}

int ContarCaracteres(Usuario u){
    int cont = 0;
    string str = u.password;

    while (str[cont] != '\0')
    {
        cont++;
    }
    return cont;
}

void RegistrarUsuario(Usuario u) {
    if (ExisteUsuario(u.username)) {
        printf("Error: El usuario ya esta registrado.\n");
        return;
    }

    FILE *archivo = fopen("usuarios.txt", "a"); 
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    fprintf(archivo, "%s %s\n", u.username, u.password);
    fclose(archivo);

    printf("Usuario registrado exitosamente.\n");
}
