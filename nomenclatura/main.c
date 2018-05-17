#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    int *punteroNumero;
    int numero;
    int numeroDos;
    numero=66;
    /**<&numeroDos=&numero;  */ //no se puede modificar la direccion de memoria de esta forma
        numeroDos=&numero;
    punteroNumero=&numero; //asigno direccion de memoria con '&'
    printf("\na-%d", numeroDos);
    numeroDos=*punteroNumero; //asignacion de valor con'*' si esta asignacion no esta echa. cno tendria el valor de la variable.
    printf("\nb- %d",numeroDos);
    //*punteroNumero=55;  //esta variable no es un entero. es un puntero a entero. no se le puede asignar un valor comun. debe ser otro puntero o ina direccion de memoria
    //printf("%d",*punteroNumero);
 printf("\n%d\n",numero);
  printf("%d\n",numeroDos);
  printf("%p\n",&numero);
   printf("c-%p\n", punteroNumero); // devuelve la direccion de memoria de la variable
    printf("d-%p\n", &punteroNumero);// %p es la notacion de punteros en hexadecimal. este printf devuelve la posicionde memoria de mi puntero
     printf("%d\n", *punteroNumero);//muestra el contenido del puntero. este printf devuelve el valor asignado al puntero

    return 0;
}
