#include<stdio.h>

int soma(int a , int b){ // uma função que recebe dois inteiros e retorna um inteiro
    return a+b;
}

int main (){
    int (*ptr_f)(int , int ); //aqui temos um ponteiro para uma função qualquer, a qual deve receber dois inteiros
    ptr_f = &soma; // o ponteiro pra função recebe o endereço do bloco de codigo relacionado a função soma
    int resposta;
    resposta = (*ptr_f)(2,20); // aqui não só acessamos a função como enviamos dois valores pra ela computar.
                               // o resultado colocamos em 'resposta'.
    printf("A resposta vale %d ", resposta);
    return 0;
}
