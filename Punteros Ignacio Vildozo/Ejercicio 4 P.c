#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void copiarFrase(char cadena1[], int *tam1, char cadena2[], int *tam2);

int main(){
    int operacion, tam1, tam2;
    char frase1[30], frase2[30];
    
    do{ 
        printf("\n\t Programa para copiar una cadena dentro de otra");
        
        printf("\n\t Ingrese la primera frase: ");
        fflush(stdin);
        gets(frase1);
        fflush(stdin);
        
        printf("\n\t Ingrese la segunda frase: ");
        fflush(stdin);
        gets(frase2);
        fflush(stdin);
        
        tam1 = strlen(frase1);
        tam2 = strlen(frase2);
        
        copiarFrase(frase1, &tam1, frase2, &tam2);
        
        printf("\n\t Ingrese el numero '1' si desea iniciar nuevamente el programa... ");
        operacion = getch();
        
        system("cls");
        
    }while(operacion == '1');    
    
    printf("\n\t\tFin del programa...\n\n");
    
}

void copiarFrase(char cadena1[], int *tam1, char cadena2[], int *tam2){
    int x;
    
    for(x=0;x<*tam2;x++){
        *(cadena2+x) = *(cadena1+x);
    }
    
    printf("\n\t La primera frase ingresada ahora es: %s", cadena1);
    printf("\n\t La segunda frase ingresada ahora es: %s", cadena2);
}
