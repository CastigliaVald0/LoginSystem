#ifndef REGISTRARSE_H_INCLUDED
#define REGISTRARSE_H_INCLUDED

#include "string.h"
#include "boolean.h"

typedef struct {
    string username;
    string password;
} Usuario;

boolean ExisteUsuario(string username);
void RegistrarUsuario(Usuario u);
int ContarCaracteres(Usuario u);

#endif // REGISTRARSE_H_INCLUDED