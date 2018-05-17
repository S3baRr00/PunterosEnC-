#include <stdio.h>
#include <stdlib.h>



int main()
{
char nombre[11]="mi nombre";
char *apellido="mi apellido";//forma correcta de hardcodeo
char *puntero;
int i;
puntero=nombre;
printf("%s\n",nombre);
printf("%s\n",apellido);

//printf("%s\n", *puntero);

printf("%d\n", *puntero);
printf("%p\n", *puntero);
printf("%s\n", puntero);

for(i=0;*(apellido+i)!= '\0';i++){//\0 identifica el final de un string asi nos aseguramos de no mostrar datos fuera de la memoria del string
printf("\n%c", *(apellido+i)); //la condicion de iteraccion debe ser esa porque sino se saldria del string y mostraria cualquier valor
}//aun asi esto no lo vamos a utilizar

printf("\n%s\n", apellido);
return 0;
}
