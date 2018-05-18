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

   printf("\n%d----%c\n", pdato->a, pdato->b); // la mejor forma de mostrar los valores de una estruct a travez de puntero
   //'->' reemplaza '*','()' y '.'
   printf("\n%d--%d\n",&d, &d.a); //devuelve la direcc de memoria

   printf("\n%d----%c\n",(*pdato).a, (*pdato).b); //devuelve los valores de la direc de memoria de esos datos en struct
   // se pone entre parentesis porque el valor de acceso(.) tiene prioridad sobre el valor de inacceso(*)
   //si no le ponemos parentesis  la computadora va a entender que nos referimos al puntero como una strecutura cosa que no es por lo que nos da error

   printf("\nTAM: %d\n", sizeof(dato));//sizeoff devuelve el tamaño de un tipo de dato //para que corra en todos los sistemas operativos se usa un sizeof ya que el peso de dato cambia

   printf("\na= %d y b= %c\n", d.a, d.b); //devuelve los valores de las variables dentro de la struct




int i;
dato lista[2]={{1,'a'},{1,'b'}};
dato* plista;
plista=lista;

   for(i=0;i<2;i++){
    //printf("\n%d---%c\n", (*(plista+i)).a , (*(plista+i)).b ); //muestra los valores de una estructura dentro de un for. aunque no aconsejable
    printf("\n%d---%c", (plista+i)->a , (plista+i)->b );                                                        //'->' reemplaza '*','()' y '.'
   }


return 0;
}
