#include<stdio.h> // scanf, printf
#include<stdlib.h> //malloc, free, rand

void organizar (int n, int * ptr);

int main (){
    int *ptr; // ponteiro pra o array de valores
    int n, i; // quantos valores? iterador
    printf("Quantos valores? ");
    scanf("%d", &n);
    ptr = (int*) malloc (sizeof(int)*n);
    printf("\n Eis os valores alocados: \n ");
    for(i = 0; i < n; i++){
        ptr[i] = rand()%100+1;
        printf(" %d ", ptr[i]);
    }
    printf("\n Eis os valores organizados: \n");
    organizar(n, ptr);
    for(i = 0; i < n; i++){
        printf(" %d ", ptr[i]);
    }
    free(ptr);
    return 0 ;
}

void organizar (int n, int * ptr){
    int aux, i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n-1; j++){
            if(ptr[j]>ptr[j+1]){
                aux = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = aux;
            }
        }
    }
}
