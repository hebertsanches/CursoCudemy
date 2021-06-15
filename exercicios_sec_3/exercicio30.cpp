#include<stdio.h>
#include<iostream>
#include<locale.h>

//Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente
//em dólares.

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float r,d,c;
	printf("Digite um valor em Reais:");
	scanf("%f", & r);
	printf("\nDigite a cotação do Dolar:");
	scanf("%f", & d);
	c=r/d;
	getchar();
	printf("%0.2f Reais correspondem a %0.2f Dolares.\n", r,c);
	system("pause");
	return 0;
	
}
