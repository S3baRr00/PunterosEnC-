#include <stdio.h>
#include <stdlib.h>


void mostrar(int *puntero, int cantidad);

int main()
{
    int numero[3]; //version antigua de vectores
    int *puntero;
    int auxiliar=333;
    puntero=numero;

    numero[0]=9; // esto ya no sse usa mas
    numero[1]=99;
    numero[2]=999;
printf("\n puntero: %d", *(puntero));
printf("\n puntero: %d", *(puntero+1));
printf("\n puntero: %d", *(puntero+2));
printf("\n puntero: %d", *(puntero+3)); // aritmetica del puntero. no le sumo un numero, le sumo la direccion de memoria que me muestre.
printf("\n numero: %d\n", numero);

    mostrar(numero,3);
    return 0;
}

void mostrar(int *puntero, int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++){
        printf("\n numero: %d",puntero[i]);  // esto esta mal
        printf("\n numero: %d",(*puntero+i));  // muestra el incremento del valor
        printf("\n numero: %d",puntero+i);    // muestra el incremento de la direccion de memoria
    }
}
