#include<stdio.h>
#include<stdlib.h>

void soma(float *p3, float *p1, float *p2, int n){ // uma função que recebe tres inteiros e um inteiro. Sem retorno
    int i;
    for(i = 0; i< n; i++){
        p3[i]= p1[i]+p2[i];
    }
}

int main (){
    void (*ptr_f)(float*, float*,float*, int); //aqui temos um ponteiro para uma função qualquer,
    // a qual deve receber tres ponteiros pra float e um inteiro
    ptr_f = &soma; // o ponteiro pra função recebe o endereço do bloco de codigo relacionado a função soma
    int i,j,n;
    float *p3; float *p1; float *p2;
    printf("Quantos termos?\t");
    scanf("%d", &n);
    p1 = (float*)malloc(n*sizeof(float));
    p2 = (float*)malloc(n*sizeof(float));
    p3 = (float*)malloc(n*sizeof(float));
    for(j=1;j<=2;j++){
        if(j==1)
            printf("Alocacao do primeiro vetor...\n");
        else
            printf("Alocacao do segundo vetor...\n");
        for(i=0;i<n;i++){
            if(j==1)
                scanf("%f", &p1[i]);
            else
                scanf("%f", &p2[i]);
        }
    }
    (*ptr_f)(p3,p1,p2,n);
    printf("Vetor resposta:");
    for(i=0;i<n;i++){
        printf("%f ", p3[i]);
    }
    free(p1);
    free(p2);
    free(p3);
    return 0;
}
