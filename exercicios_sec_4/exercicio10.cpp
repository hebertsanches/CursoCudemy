#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<stdlib.h>

//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
//peso ideal, utiizando as seguintes fórmulas (onde / corresponde à altura):
//* Homens: (72.7*h) — 58
//* Mulheres: (62,1*h) - 44,7


int main(){
	setlocale(LC_ALL,"portuguese");
	int var;
	float h,p;
	
	printf("Digite sua altura em metros(ex.: 1,60):");
	scanf("%f", &h);
	printf("\nSEXO\n");
	printf("\n1 - HOMEM\n");
	printf("\n2 - MULHER");
	printf("\nDigite 1 para homem e 2 para mulher:\n");
	scanf("%d", &var);
	switch(var){
		case 1:
			system("cls");
			p=(72.2*h)-58;
			printf("peso ideal para um HOMEM de %0.2fm é:%0.2fKg\n",h,p);
			break;
			
			case 2:
			system("cls");
			p=(62.1*h)-44.7;
			printf("peso ideal para uma MULHER de %0.2fm é:%0.2fKg\n",h,p);
			break;
	}
	system("pause");
	return 0;
	
}

