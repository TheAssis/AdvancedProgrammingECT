#include<stdio.h>

int main(){
	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;

	aloha[2] = value;	//ok
	scanf("%f", &aloha);	//ok
	aloha = value";		//errado
	printf("%f", aloha);	//ok
	coisas[4][4] = aloha[3];//ok
	coisas[5] = aloha;	//errado, aloha significa a posição 					//de memoria
	pf = value;		//errado
	pf = aloha;		//ok

    return 0;
}
