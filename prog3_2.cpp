/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 28/04/2022
Escuela: Universidad del Valle de M�xico Campus Villahermosa
Materia: Programaci�n Estructurada
Ciclo: 01/2022

Este es un programa usando buffer en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:

    -Variables enteros y en cadena
    -printf para mostrar mensajes y variables
    -fgets
    -scanf
    -El uso de include para las librer�as
    -Librer�as de la funci�n string.h
    -Uso de condicionales
    -Archivos en cpp y tipo Header
    -buffer
    -#define MAX_BUFFER
    -Ciclos
    -fflush
    -Funciones
   	-FILE: open/close
    -Comentarios para la documentaci�n interna del programa
*/ 
#include<stdio.h>
#include"milibreria.h"
#define MAX_BUFFER 200
int main(){
	//Declaraci�n de variables
	char nombre[50], buffer[MAX_BUFFER];
	FILE *f;
	int n=0, lineas=0;
	//Proceso
	leers("Nombre del archivo: ", nombre, 50);
	//Abrir el arhivo en modo lectura
	f=fopen(nombre,"r");
	//Verificar si se abrio correctamente el archivo
	if(f==NULL){
		printf("Error al tratar de abrir el archivo\n");
	}
	else {//Proceso
		while (fgets(buffer,MAX_BUFFER,f)!=NULL){
			printf("%s", buffer);
			n++;
		}
		//Cerrar
		fclose(f);
		printf("\n----------->Para mostar el archivo se hicieron %d accesos\n",n); //Salida
	}
	return 0;
}
