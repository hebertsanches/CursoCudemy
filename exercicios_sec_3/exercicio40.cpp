//Uma empresa contrata um encanador a R$30,00 por dia. Fa�a um programa que solicite
//o n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser
//paga, sabendo-se que s�o descontados 8% para imposto de renda.

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
	printf("\nO valor a ser pago ap�s desconto de 8%% �: R$%0.2f\n",sfd);
	getchar();
	system("pause");
	return 0;
}

