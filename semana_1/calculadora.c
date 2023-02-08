#include "cs50.h"
#include "cs50.c"
#include <stdio.h>

// en este caso se uso el operador de suma, si se cambia el simbolo hara otra operacion
/* los simbolos son:
* suma " + "
* resta " - "
* multiplicacion " * "
* division " / "
* para decir cual es el menor de los numeros comparados " % "
*/
int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Perform addition
    printf("%i\n", x % y);
}