#include "boolean.h"

void booscan(boolean &bol)
{
    int i;
    boolean valido;

    do
    {
        valido = TRUE;

        printf("Ingrese un boolean (1/0): ");
        scanf("%d", &i);
        switch (i)
        {
        case 0:
            bol = FALSE;
            break;
        case 1:
            bol = TRUE;
            break;
        default:
            valido = FALSE;
            printf("El dato ingresado es invalido, intente nuevamente");
        }
    } while (!valido);
}
void booprint(boolean bol)
{
    if (bol)
        printf("VERDADERO\n");
    else
        printf("FALSO\n");
}
