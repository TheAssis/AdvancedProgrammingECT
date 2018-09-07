// questao 16 incompleta, por Mateus de Assis
#include<stdio.h>
#include<stdlib.h>

struct Lista{
    int a;
    int b;
};

void mysort(struct Lista *ptr, int n, int (*compar)(const void*, const void *), int d);
int compar (const void *x1, const void *x2);

int main(){
    struct Lista *ptr;
    int n, i, d ;
    printf("Quantos termos na lista? ");
    scanf("%d",&n);
    ptr = (struct Lista *)malloc(n*sizeof(struct Lista));
    for(i = 0;  i < n ; i++){
        printf("Para o item %d inserir: \n\t a = ",i);
        scanf("%d", &(ptr+i)->a);
        printf("\t b = ");
        scanf("%d", &(ptr+i)->b);
    }
    printf("\n Antes de organizar temos o seguinte array... \n");
    for(i = 0;  i < n ; i++){
        printf("Item %d: ", i);
        printf("< %d, %d>\n",(ptr+i)->a,(ptr+i)->b);
    }
    printf("Comparar qual elemento? (0 - primeiro / 1 - segundo) ");
    scanf("%d", &d);
    mysort(ptr, n*sizeof(struct Lista), compar, d);
    printf("\n Depois de organizar temos o seguinte array... \n");
    for(i = 0;  i < n ; i++){
        printf("Item %d: ", i);
        printf("< %d, %d>\n",(ptr+i)->a,(ptr+i)->b);
    }
    return 0;
}

int compar (const void *x1, const void *x2){ // ordem crescente
    return ( *(int*)x1 - *(int*)x2 );
}

void mysort(struct Lista *ptr, int n, int (*compar)(const void*, const void *), int d){
    struct Lista aux;
    int i,j;
    if(d == 0){
        for(j = 0; j < n-1; j++){
            for(i = 0; i < n-1; i++){
                if((*compar)((const void *)(ptr+1+i)->a,(const void *)(ptr+i)->a)<0){
                    aux = *(ptr+1+i);
                    *(ptr+1+i)=*(ptr+i);
                    *(ptr+i) = aux;
                }
            }
        }
    }
    else{
        for(j = 0; j < n-1; j++){
            for(i = 0; i < n-1; i++){
                if((*compar)((const void *)(ptr+1+i)->b,(const void *)(ptr+i)->b)<0){
                    aux = *(ptr+1+i);
                    *(ptr+1+i)=*(ptr+i);
                    *(ptr+i) = aux;
                }
            }
        }

    }

}
