//Façaum programa que leia o valor de um produto e imprima o valor com desconto, tendo
//em vista que o desconto foi de 12%.

#include<stdio.h>
#include<iostream>
#include<locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float v,nv,desc;
	printf("Digite o valor do produto:R$\n");
	scanf("%f", & v);
	desc = v*0.12;
	nv=v-desc;
	getchar();
	printf("\nO valor do produto com desconto de 12%% é: R$%0.2f\n",nv);
	system("pause");
	return 0;
}
