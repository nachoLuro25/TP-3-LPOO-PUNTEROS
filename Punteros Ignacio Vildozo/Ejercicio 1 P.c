#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void intercambiarNumeros(int *num1, int *num2);

int main(){
    int num1, num2, operacion;
    
    do{
        printf("\n\tIngrese un numero para el primer valor: ");
        scanf("%d",&num1);
        
        printf("\n\tIngrese otro numero para el segundo valor: ");
        scanf("%d",&num2);
    
        printf("\n\tEl valor del primer numero es: %d y del segundo es: %d", num1, num2);
    
        intercambiarNumeros(&num1, &num2);
    
        printf("\n\tEl primer valor es: %d y el segundo es: %d", num1, num2);
        
        printf("\n\tPresione '1' para reiniciar el programa... ");
        operacion = getch();
        
        system("cls");
        
    } while(operacion == '1');    
    
    printf("\n\n\tFin del programa...");
    
}

void intercambiarNumeros(int *num1, int *num2){
    int aux;
    
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

