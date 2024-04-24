#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int maximo = -99999;
int minimo = 99999;

void encontrarMaximoMinimo(int arr[],int *size,int *maximo, int *minimo);

int main(){
    int operation, position=-1, size, arr[30];
    
    do{
        position = -1;
        maximo = -99999;
        minimo = 99999;
        
        printf("\n\t Rellene el vector: \n\n\t  Nota: Recuerde que para terminar el ingreso de numeros debe ingresar uno menor o igual a 0 \n\n");
        
        do{
            position++;
            printf("\t Ingrese el numero en la posicion %d: ",position+1);
            scanf("%d",&arr[position]);
        }while(arr[position]>0&&arr[position]<=1000);
        
        encontrarMaximoMinimo(arr,&position,&maximo,&minimo);
        
        printf("\n\t Ingrese el numero '1' si desea iniciar nuevamente el programa... ");
        operation = getch();
        
        system("cls");
        
    }while(operation == '1');    
    
    printf("\n\t\tFIN del programa...\n\n");
    
}

void encontrarMaximoMinimo(int arr[],int *size,int *maximo, int *minimo){
    int position;
    
    for(position=0;position<*size;position++){
        if(*maximo < *(arr+position)){
            *maximo = *(arr+position);
        }
        if(*minimo > *(arr+position)){
            *minimo = *(arr+position);
        }
    }

    printf("\n\n\t\t El numero maximo fue: %d y el numero minimo fue %d", *maximo,*minimo);
}

