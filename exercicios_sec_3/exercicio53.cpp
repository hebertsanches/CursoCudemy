#include<stdio.h>
#include<iostream>
#include<locale.h>

//Fa�a um programa para ler as dimens�es de um terreno (comprimento C e largura L),
//bem como o pre�o do metro de tela P. Imprima o custo para cercar este mesmo terreno
//com tela.

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float c,l,p,pt,a;
	
	printf("Digite o comprimento terreno:");
	scanf("%f", &c);
	printf("Digite largura do terreno:");
	scanf("%f", &l);
	printf("\nDigite o valor do metro da tela:\nR$");
	scanf("%f", & p);
	a=c*l;
	pt=a*p;
	printf("\nO custo total para cercar o terreno de %0.2f Metros quadrados � de:R$%0.2f\n",a,pt);
	
	
	getchar();
	system("pause");
	return 0;
	
}
