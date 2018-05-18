#include <stdio.h>
#include <stdlib.h>

int cargarArray(int*, int);

int main()
{
    int vector[3];
   // int* puntero; no es necesario ya que no trabajamos con main
   // puntero=vector;


    if(cargarArray(vector, 3))
    {
        printf("carga exitosa\n");
    }
    else{
        printf("error al cargar los datos");
    }

    return 0;
}

int cargarArray(int* array , int tam){
int i;
int retorno=0;

    if(array!=NULL){ //control de nulidad. antes de hacer cualquier funcion para evitar que el programa crashee
    retorno=1;
    for(i=0;i<tam;i++){
    printf("\ningrese un numero: ");
    scanf("%d", array+i);
    }
    // el valor que toma la variable i lo multiplica por el size off del puntero sumando una determinada cantidad de bytes


    for(i=0;i<tam;i++){
    printf("%d\n", *(array+i));
    }

    }

    // el '*' siempre afuera
return retorno;
}
