#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int contador=0;

void contarCantVecesCharEnFrase(char frase1[],int *dim1, char *caracter, int *contador);

int main(){
	int operacion, dim1, dim2;
	char frase1[30], frase2[30], caracter;
	
	do{
		contador = 0;
		
		printf("\n\n\t Programa para contar la cantidad de vceces que se repite un caracter en una cadena");
		
		printf("\n\n\t\t Ingresa la primera frase: ");
		fflush(stdin);
		gets(frase1);
		fflush(stdin);
		
		dim1 = strlen(frase1);
		
		printf("\n\t\t Ingresame el caracter del cual quieres contar\n\n\t\t la cantidad de veces que esta en la cadena anterior: ");
		
		scanf("%c",&caracter);
		
		contarCantVecesCharEnFrase(frase1, &dim1, &caracter, &contador);
		
		printf("\n\n\n\n\t\t Ingrese el numero '1' si quiere iniciar nuevamente el programa... ");
		operacion = getch();
		
		system("cls");
		
	}while(operacion=='1');	
	
	printf("\n\t\t Fin del programa... \n\n");
	
}

void contarCantVecesCharEnFrase(char frase1[],int *dim1, char *caracter, int *contador){
	int x;
	
	for(x=0;x<*dim1;x++){
		if(*(frase1+x)==*caracter){
			*contador = *contador + 1;
		}
	}
	
	printf("\n\t\t La cantidad de veces que se encontro el contador %d", *contador);
}
