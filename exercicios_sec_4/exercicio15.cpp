/*Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto �, domingo se 1, segunda-feira se 2, e
assim por diante.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int var;
	
	printf("Digite um n�mero de 1 a 7:\n");
	scanf("%d", &var);
	switch(var){
		case 1:
		printf("\nDomingo\n");
		break;
		case 2:
		printf("\nSegunda\n");
		break;
		case 3:
		printf("\nTer�a\n");
		break;
		case 4:
		printf("\nQuarta\n");
		break;
		case 5:
		printf("\nQuinta\n");
		break;
		case 6:
		printf("\nSexta\n");
		break;
		case 7:
		printf("\nS�bado\n");
		break;
		default:
			printf("\nValor inv�lido\n");
	}
	return 0;
}
