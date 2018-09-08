#include<stdio.h>
#include<stdlib.h>

void myrealloc(int *old, int newBytes, int oldBytes);

int main(){
    int n,o;
    int * ptr;
    printf("Quantos termos a alocar? ");
    scanf("%d",&o);
    ptr = (int *)malloc(n*sizeof(int));
    printf(" %d termos alocados. Realocando... \n quantos termos? ", o);
    scanf("%d",&n);
    myrealloc(ptr,n,o);
    return 0;
}

void myrealloc(int *old, int newBytes, int oldBytes){
    int * aux;
    int i;
    old = (int*)old ;
    aux = (int *)malloc(newBytes*sizeof(int));
    if(newBytes ==  oldBytes){
        old = aux;
    }
    else{
        if(newBytes > oldBytes){
           for(i = 0; i < newBytes; i++){
                aux[i]=old[i];
           }
        }
        else{
            for(i = 0; i < oldBytes; i++){
                aux[i]=old[i];
           }
        }
        free(old);
    }
    old = aux;
}
