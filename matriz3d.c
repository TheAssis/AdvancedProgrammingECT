// uma matriz 3d gerada por alocação dinâmica
// por Mateus de Assis

#include<stdio.h> // scanf, printf
#include<stdlib.h> // malloc, free, rand, srand
#include<string.h> //memcpy
#include<time.h> // time

int main(){
    srand(time(NULL));
    int ***x, ***y; // duas matrizes 3d
    int nc = 3, nl = 4 , nf = 2;
    // nf vem de "numero de folhas", pois considero
    // essa matriz duas folhas enfileiradas

    int i, j , k;

    x = (int ***) malloc (sizeof(int **)*nf);
    y = (int ***) malloc (sizeof(int **)*nf);

    if(x == NULL || y == NULL){
        printf("erro ao alocar vetor auxiliar superior \n");
        exit(0);
    }

    x[0] = (int **) malloc (sizeof(int *)*nf*nl);
    y[0] = (int **) malloc (sizeof(int *)*nf*nl);

    if(x[0] == NULL || y[0] == NULL){
        printf("erro ao alocar vetor auxiliar inferior \n");
        exit(0);
    }

    x[1] = x[0] + nl*sizeof(int **);
    y[1] = y[0] + nl*sizeof(int **);

    x[0][0] = (int *)malloc(sizeof(int)*nf*nc*nl);
    y[0][0] = (int *)malloc(sizeof(int)*nf*nc*nl);

    if(x[0][0] == NULL || y[0][0] == NULL){
        printf("erro ao alocar vetor que tem papel de matriz \n");
        exit(0);
    }

   //o codigo trava quando chega aqui, aparentemente. Acho que não estou alocando os endereços das linhas direito.
    for ( j = 1; j< nc; j++){
        for(i = 1; i< nl; i++){
            x[i][j] = x[0][0] + i*j*sizeof(int);
            y[i][j] = y[0][0] + i*j*sizeof(int);
        }
    }
    // isso mesmo, dentro desse for entre as linhas 46 e 51

    // aqui eu deveria preencher a matriz 3d em si.
    for(k = 0 ; k < nf; k++){ printf("folha %d: \n", k);
        for(j = 0; j < nc; j++){
            for(i = 0; i < nl; i++){
                x[i][j][k] = rand()%10;
                printf("%d ",x[i][j][k]);
            }printf("\n");
        }
    }
   

}
