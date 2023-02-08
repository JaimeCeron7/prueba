#include "cs50.c" // para usar librerias se deben colocar los nombres entre comillas y se deben colocar los archivos .c y .h
#include "cs50.h" // las librerias .c y .h deben estar en el mismo directorio que el codigo principal
#include <stdio.h>


/*
*NOTA:
*desactivar el antivirus antes de iniciar porque de lo contrario no deja copilar 

*NOTA 2:
* la funcion get_string no funciona por ahora y no he encontrado la forma de hacerla funcionar 
*/


int main(void)
{

    string name = ("asi imprime"); // por ahora el string funciona, se debe colocar string segudo del nombre que quiere darle
    printf("hello, %s\n", name); //se usa %s para imprimir el string 
    
    // forma 2 la cual no funciona el get_string
    string name2 = get_string; // de esta forma la funcion al parecer no tiene problemas pero aun no se puede ingresar un dato por consola 
    printf("asi no imprime, %s\n", name2); //se usa %s para imprimir el string 

    // si funcionara el get_string, permite que escribas en consola y este se guarde en la variable para luego imprimirla 
}




