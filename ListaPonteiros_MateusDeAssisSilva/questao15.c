#include<stdio.h> // scanf, printf
#include<stdlib.h> //malloc, free, rand, qsort

int compar (const void* p1, const void* p2); // declaração de função de comparação

int main (){
    float *ptr; // ponteiro pra o array de valores
    int n, i; // quantos valores? iterador
    printf("Quantos valores? ");
    scanf("%d", &n);
    ptr = (float*) malloc (sizeof(float)*n); // alocação de memoria pro vetor de floats
    printf("\n Alocacando valores: \n ");
    for(i = 0; i < n; i++){
        scanf("%f",&ptr[i]);
    }
    printf("\n Eis os valores organizados: \n");
    qsort(ptr, n, sizeof(float),compar); // aqui indicamos qual vetor queremos organizar,
                                        // seu tamanho e a função de comparação. A função
                                        //qsort irá organizar
    for(i = 0; i < n; i++){
        printf(" %.1f ", ptr[i]);
    }
    free(ptr); // liberação de memoria
    return 0 ;
}

int compar (const void* p1, const void* p2){
    return (*(int*)p1 - *(int*)p2); // o elemento p1 deve vir antes do p2, logo, a diferença tem que ser negativa
    /*
    suponha p1 = 10 3 p2 = 30
    se 10-30< 0, logo p1 vem antes
    se 30-10>0, p2 vai antes de p1

    */
}
