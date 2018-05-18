#include <stdio.h>
#include <stdlib.h>


typedef struct{
int a;
char b;
}dato;


int main()
{
   dato d;
   d.a=5;
   d.b='<';

   dato* pdato;

   pdato = &d;

   printf("%d--%d\n",&d, &d.a); //devuelve la direcc de memoria

   printf("%d----%c\n",(*pdato).a, (*pdato).b); //devuelve los valores de la direc de memoria de esos datos en struct

   printf("TAM: %d\n", sizeof(dato));//sizeoff devuelve el tamaño de un tipo de dato //para que corra en todos los sistemas operativos se usa un sizeof ya que el peso de dato cambia

   printf("a= %d y b= %c", d.a, d.b); //devuelve los valores de las variables dentro de la struct
    return 0;
}
