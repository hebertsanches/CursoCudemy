//Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:

//* o total a pagar com desconto de 10%;

//* o valor de cada parcela, no parcelamento de 3x sem juros;

//* a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)

//* a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float v,td,p,c1,c2;
	printf("Digite o valor total da venda:\nR$");
	scanf("%f", & v);
	td=v-(v*0.10);
	p=v/3;
	c1=td*0.05;
	c2=v*0.05;
	printf("\nO valor a pagar com 10%% de desconto é: R$%0.2f\n", td);
	printf("\nO valor de cada parcela em 3X sem juros é de:R$%0.2f\n",p);
	printf("\nA comissão do vendedor na venda a vista será de:R$%0.2f\n",c1);
	printf("\nA comissão do vendedor na venda parcelada será de:R$%0.2f\n",c2);
	getchar();
	system("pause");
	return 0;
}
