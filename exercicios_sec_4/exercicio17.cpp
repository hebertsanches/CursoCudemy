/*Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:

A = ((basemaior + basemenor) * altura)/2

Lembre-se a base maior e a base menor devem ser números maiores que zero.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float a,b1,b2,h;
	printf("Digite a ALTURA do trapézio:\n");
	scanf("%f", &h);
	if(h>=0){
		printf("\nDigite a base MAIOR do trapézio:\n");
		scanf("%f", &b1);
		if(b1>0){
			printf("\nDigite a base MENOR do trapézio:\n");
			scanf("%f", &b2);
			if(b2>0){
				a=((b1+b2)*h)/2;
				printf("\nA área do trapézio é:%0.2f\n",a);
			}else{
				printf("\nValor  da base MENOR inválido.");
			}
		}else{
			printf("\nValor da base MAIOR inválido.");
		}
	}else{
		printf("\nValor da ALTURA inválido.");
	}
	
	
	return 0;
}
