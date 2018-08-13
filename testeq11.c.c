#include<stdio.h>

int main(){
    int cont = 0;

    int xi[4] = {0,1,2,3};
    int *pi = xi;

    for (cont = 0; cont < 4; cont++){
        printf("antes da modificacao : %d \n", *(pi+cont));
    }

    pi = pi+1;

    for (cont = 0; cont < 4; cont++){
        printf("depois da modificacao: %d ", *(pi+cont));
    }

    return 0;
}

