//Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite
//o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser
//paga, sabendo-se que são descontados 8% para imposto de renda.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	const int s=30.00;
	float d,sf,desc,sfd;
	printf("Digite a quantidade de dias que o encanador trabalhou:\n");
	scanf("%f", & d);
	sf=(s*d);
	desc=sf*0.08;
	sfd=sf-desc;
	printf("\nO valor a ser pago após desconto de 8%% é: R$%0.2f\n",sfd);
	getchar();
	system("pause");
	return 0;
}

