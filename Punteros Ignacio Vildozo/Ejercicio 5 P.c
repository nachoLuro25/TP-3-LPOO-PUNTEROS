#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void combinarFrases(char cadena1[], int *tam1, char cadena2[], int *tam2);

int main(){
    int operacion, tam1, tam2;
    char frase1[30], frase2[30];
    
    do{ 
        tam1 = 0;
        tam2 = 0;
        
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
        
        combinarFrases(frase1, &tam1, frase2, &tam2);
        
        printf("\n\t Ingrese el número '1' si desea iniciar nuevamente el programa... ");
        operacion = getch();
        
        system("cls");
        
    }while(operacion == '1');    
    
    printf("\n\t\t Fin del programa...\n\n");
    
}

void combinarFrases(char cadena1[], int *tam1, char cadena2[], int *tam2){
    int x, y, z = 0;
    char vectorCombinado[50];
    
    int dim = *tam1 + *tam2;
    
    for(x = 0; x < *tam1; x++){
        *(vectorCombinado + x) = *(cadena1 + x);
    }
    for(y = x; y < dim; y++, z++){
        *(vectorCombinado + y) = *(cadena2 + z);
    }
    
    printf("\n\t\t La frase combinada es: %s", vectorCombinado);
}

