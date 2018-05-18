#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp;
    char buffer[100]={"esto es un texto dentro del fichero\n"};
    char bufferIn[100];

    fp = fopen("fichero.txt", "w");
    // funcion para abrir el archivo
    // primero se pasa el nombre y luego de la ',' se indica si se va a leer o escribir
    //para escribir se usa 'w' de "write" crea un archivo si no existe o lo sobreescribe si existe

    fprintf(fp, "%s", "esto es un tipo de texto\n");

    fprintf(fp, "esto es un tipo de archivo con tipo de dato:\n");

    fprintf(fp, buffer);
    //imprime en el archivo . le indico a que achivo y que le voy a envier;

    fclose(fp);
    //cierra el archivo. SIEMPRE dbe estar presente

    system("pause");
    system("cls");

    fp=fopen("fichero.txt", "r");
    //para leer. siempre debe estar el path.

    if(fp==NULL){
        printf("no se encuentra\n");
    }
    else{
     while(!feof(fp)){
        fgets(bufferIn,100,fp);
        puts(bufferIn);
     }
    }

    fclose(fp);
    system("pause");
    remove("fichero.txt");
    return 0;
}
