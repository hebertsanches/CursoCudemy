#include <iostream>
#include <stdio.h>

//Faça um programa que leia um numero real e o imprima
int main() 
{
	
	float numero;
	
	printf("Digite um numero:\n");
	scanf("%f", & numero);// %f para ler o FLOAT
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("O numero digitado foi: %f\n\n",numero);
	
	system("PAUSE");
	return 0;
}

