#include <stdio.h>
#include <stdlib.h>


typedef struct{
int i;
char j;
}eDato;
int main()
 {
 /**
 EJEMPLO 0;
    FILE* pArchivo; //se pueden perder datos, no se pueden usar desde otra aplicacion, se sobreescriben datos, etc
    char cadena[50]="hola ";

    pArchivo= fopen("archivo.txt", "w");

    if(pArchivo!= NULL){
        fprintf(pArchivo, "%s--%d", cadena, 156);//al fprinf siempre se le dabe pasar un dato a travez del string
        fprintf(pArchivo," otra cadena\n");
        fclose(pArchivo);
        printf("guardado!\n");
    }
    else{
        printf("imposible guardar! \n");
    }

    pArchivo=fopen("archivo.txt", "r");
    if(pArchivo!= NULL){
        while(!feof(pArchivo)){
            fgets(cadena,50,pArchivo);
            puts(cadena);
        }
        fclose(pArchivo);
    }
EJEMPLO 1;
    FILE* miArchivo;
    int numero=64;
    miArchivo= fopen("prueba1.txt","w");
    fwrite(&numero, sizeof(int),1,miArchivo);//no solo permite escribir texto sino tambien cualquier tipo de datos incluida estructuras y se usa mas en archivos binarios
    //primero la direccion de memoria de lo que se va a ingresar, ya sea en & o el puntero
    //luego el sizeof que devuelve el peso en bytes del dato que vamos a pasar
    //luego la cantidad de datos que vamos a escribir en este caso 1 entero
    //finalmente el puntero a file

   fclose(miArchivo);

   miArchivo=fopen("prueba1.txt","r"); //W o R en mayusculas es para archivos binarios
   fread(&numero, sizeof(int),1,miArchivo);//se pasan los mismos datos que con el fwrite
   fclose(miArchivo);
   printf("NUMERO: %d", numero);
EJEMPLO 2;
    FILE* miArchivo;
    int i;
    int numero;
    int lista[5];
    miArchivo= fopen("prueba2.txt","w");
    for(i=0;i<5;i++){
        printf("\ningrese un numero: ");
        scanf("%d", &numero);
        fwrite(&numero, sizeof(int),1, miArchivo);
    }
    fclose(miArchivo);
    miArchivo=fopen("prueba2.txt","r");
    i=0;
    while(!feof(miArchivo)) //a veces el feof falla porque el final del archivo coincide con un valor
    {
        fread(&numero, sizeof(int),1, miArchivo);

        //esto es un filtro para que no lea mas ala del final
        if(feof(miArchivo)) //esto funciona en este orden
        {
            break;
        }

        printf("%d \n", numero);
        i++;

    }
    fclose(miArchivo);
EJEMPLO 3;
    FILE* miArchivo;
    int i;
    int numero;
    int lista[5]={1,5,9,8,7};
    miArchivo= fopen("prueba3.txt","w");
    for(i=0;i<5;i++){
        fwrite(&lista, sizeof(int),5, miArchivo); //cambia la cantidad al ser un array
    }
    fclose(miArchivo);
    miArchivo=fopen("prueba3.txt","r");

    while(!feof(miArchivo)) //a veces el feof falla porque el final del archivo coincide con un valor
    {
        fread(&numero, sizeof(int),1, miArchivo);
    }
    fclose(miArchivo);
   for(i=0;i<5;i++){
    printf("%d \n", lista[i]);
   }

   EJEMPLO: BINARIO

   FILE* miArchivo;
   eDato d={1,'b'};
       miArchivo= fopen("miBinario.dat", "wb");//dat o bin para binarios // wb es para escribir en binario
       if(miArchivo!= NULL)
       {
           fwrite(&d, sizeof(eDato), 1, miArchivo);
           fclose(miArchivo);
       }
       miArchivo= fopen("miBinario.dat", "rb");//dat o bin para binarios // rb es para escribir en binario
       if(miArchivo!= NULL)
       {
           fread(&d, sizeof(eDato), 1, miArchivo);
           fclose(miArchivo);
           printf("%d--%c",d.i, d.j);
       }
       */



    FILE* archivo;
    archivo= fopen("mihtml.html","w");

     if(archivo!= NULL){
        fprintf(archivo,"<html><head>hola<\head><body><\html>");
        fclose(archivo);
     }


    return 0;
}
