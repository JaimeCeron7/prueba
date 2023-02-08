#include <stdio.h>
#include "cs50.c" // para usar librerias se deben colocar los nombres entre comillas y se deben colocar los archivos .c y .h
#include "cs50.h" // las librerias .c y .h deben estar en el mismo directorio que el codigo principal

int main(void)
{
    // Prompt user to agree 
    char c = get_char("estas deacuerdo/du yuou agree? "); // el get_char permite inteactuar con la consula, ingreas un valor y deacuerdo a la condeicion te regresa otro

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("deacuerdo/Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("desacuerdo/Not agreed.\n");
    }

    // a diferencia del get_string, este no imprime lo que se escribe, este interpreta lo que ingresas y te da una respuesta
}