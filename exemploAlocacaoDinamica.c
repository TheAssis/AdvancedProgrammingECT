/*

  Um exemplo de alocação dinâmica,
    por Mateus de Assis.

*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int *x, *y, *z;
    int t = 4, i, j = 2;

    // primeiro aloca-se 4 espaços para inteiros.
    // os endereços se guardam em x, y e z.
    x = (int*) malloc(t * sizeof(int));
    y = (int*) malloc(t * sizeof(int));
    z = (int*) malloc(t * sizeof(int));

    // checar se a alocação funcionou:
    if(x == NULL || y == NULL){
        printf ("erro na alocacao");
        exit(0);
    }

    // preenchendo os vetores
    for(i = 0; i< t; i++){
        *(x+i) = i;
        *(y+i) = i*10;
    }

    //agora iremos mostrar "os vetores" x e y

    for(j = 0; j < 2; j++){
        if(j == 0) printf ("VETOR x: ");
        else printf("VETOR y: ");
        for(i = 0; i < t; i++){
            if(j == 0) printf ("%d ", *(x+i));
            else printf("%d ", y[i]);
        }
        printf("\n");
    }

    printf("VETOR z: ");
    // agora iremos preencher z:
    for(i = 0; i< t; i++){
        *(z+i) = *(x+i) + *(y+i) ;
        printf("%d ", z[i]);
    }

    free(x);
    free(y);
    free(z);

    return 0;
}
