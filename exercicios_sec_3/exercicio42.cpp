//Recebao sal�rio-base de um funcion�rio. Calcule e imprima o sal�rio a receber, sabendo-
//se que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso,
//ele paga 7% de imposto sobre o sal�rio-base.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float sb,sr,g,d;
	printf("Digite o sal�rio:\nR$");
	scanf("%f", & sb);
	g=sb*0.05;
	d=sb*0.07;
	sr=sb+g-d;
	printf("\nO sal�rio a receber � de:R$%0.2f\n",sr);
	
	
	getchar();
	system("pause");
	return 0;
}
