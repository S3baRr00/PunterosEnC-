#include <stdio.h>
#include <stdlib.h>

void intercambiar(int num1, int num2);
void intercambiarConPunteros(int *num1, int *num2);
void ponerEn0(int *num1);

int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;
    ponerEn0(&edadDos);
    intercambiarConPunteros(&edadUno, &edadDos); //siempre que se quiera trabajar con la direccion de memoria
    printf("\n edad 1: %d", edadUno);
     printf("\n edad 2: %d", edadDos);





    return 0;
}


void intercambiar(int num1, int num2){

int aux;

aux=num1;
num1=num2;
num2=aux;


}


void intercambiarConPunteros(int *num1, int *num2){

int aux;

    aux=*num1;
    *num1=*num2;
    *num2=aux;


}


void ponerEn0(int *num1){
*num1=0;


}
