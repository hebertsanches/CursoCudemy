/*Fa�a um programa que calcule e mostre a �rea de um trap�zio. Sabe-se que:

A = ((basemaior + basemenor) * altura)/2

Lembre-se a base maior e a base menor devem ser n�meros maiores que zero.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float a,b1,b2,h;
	printf("Digite a ALTURA do trap�zio:\n");
	scanf("%f", &h);
	if(h>=0){
		printf("\nDigite a base MAIOR do trap�zio:\n");
		scanf("%f", &b1);
		if(b1>0){
			printf("\nDigite a base MENOR do trap�zio:\n");
			scanf("%f", &b2);
			if(b2>0){
				a=((b1+b2)*h)/2;
				printf("\nA �rea do trap�zio �:%0.2f\n",a);
			}else{
				printf("\nValor  da base MENOR inv�lido.");
			}
		}else{
			printf("\nValor da base MAIOR inv�lido.");
		}
	}else{
		printf("\nValor da ALTURA inv�lido.");
	}
	
	
	return 0;
}
