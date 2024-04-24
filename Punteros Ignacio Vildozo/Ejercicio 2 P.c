#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int total = 0;
float average = 0;

void calculateTotalAverage(int arr[],int *size,int *total, float *average);

int main(){
    int operation, position=-1, size, arr[30];
    
    do{
        position = 0;
        total = 0;
        average = 0;
        
        printf("\n\t Llene el arreglo: \n\n\t  Nota: Para terminar el ingreso de numeros, debe ingresar uno menor o igual a 0 \n\n");
        
        do{
            position++;
            printf("\t\t Ingrese el numero en la posicion %d: ", position);
            scanf("%d",&arr[position]);
        }while(arr[position]>0&&arr[position]<=1000);
        
        calculateTotalAverage(arr,&position,&total,&average);
        
        printf("\n\t Ingrese el numero '1' si desea reiniciar el programa... ");
        operation = getch();
        
        system("cls");
        
    }while(operation == '1');    
    
    printf("\n\tFIN... \n\n");
    
}

void calculateTotalAverage(int arr[],int *size,int *total, float *average){
    int position;
    for(position=0;position<*size;position++){
        *total = *total + *(arr+position);
    }
    
    *average =  (float)*total / (float)(*size-1);
    
    printf("\n\t\t La suma fue: %d y el promedio fue de: %0.2f", *total, *average);
}

