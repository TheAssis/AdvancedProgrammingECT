#include<stdio.h>

int soma(int a , int b){ // uma fun��o que recebe dois inteiros e retorna um inteiro
    return a+b;
}

int main (){
    int (*ptr_f)(int , int ); //aqui temos um ponteiro para uma fun��o qualquer, a qual deve receber dois inteiros
    ptr_f = &soma; // o ponteiro pra fun��o recebe o endere�o do bloco de codigo relacionado a fun��o soma
    int resposta;
    resposta = (*ptr_f)(2,20); // aqui n�o s� acessamos a fun��o como enviamos dois valores pra ela computar.
                               // o resultado colocamos em 'resposta'.
    printf("A resposta vale %d ", resposta);
    return 0;
}
