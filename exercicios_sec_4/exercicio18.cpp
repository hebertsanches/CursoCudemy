/*Faça um programa que mostre ao usuário um menu com 4 opções de operações ma-
temáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu pro-
grama então pede dois valores numéricos e realiza a operação, mostrando o resultado e
saindo.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int var;
	float a,b,c;
	printf("Escolha quais das seguintes operações deseja fazer:\n 1-SOMA.\n 2-SUBTRAÇÃO.\n 3-MULTIPLICAÇÃO.\n 4-DIVISÃO.\n");
	scanf("%d", & var);
	switch(var){
		case 1:
			printf("\nDigite dois valores para realizar a soma:\n");
			scanf("%f %f", &a, &b);
			c=a+b;
			printf("\nA soma de %0.2f + %0.2f é:%0.2f\n",a,b,c);
			break;
			case 2:
				printf("\nDigite dois valores para realizar a subtração:\n");
				scanf("%f %f", &a,&b);
				c=a-b;
				printf("\nA subtração de %0.2f e %0.2f é:%0.2f\n",a,b,c);
				break;
				case 3:
					printf("\nDigite dois valores para realizar a multiplicação:\n");
					scanf("%f %f", &a, &b);
					c=a*b;
					printf("\nA multiplicação de %0.2f e %0.2f é:%0.2f",a,b,c);
					break;
					case 4:
						printf("\nDigite dois valores para realizar a divisão:\n");
						scanf("%f %f", &a,&b);
						c=a/b;
						printf("\nA divisão de %0.2f e %0.2f é: %0.2f",a,b,c);
						break;
						default:
							printf("\Valor inválido");
	}
	return 0;
}
