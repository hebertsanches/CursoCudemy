#include <iostream>
#include <stdio.h>

//Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros. À
//fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em
//metros cúbicos.
int main(int argc, char** argv) 
{
	
	float m, l;
	
	printf("Digite o volume em metros cubicos:\n");
	scanf("%f", & m);
	l = 1000*m;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("\n%0.2f metros cubicos correspondem a %0.2f litros\n\n",m,l);
	
	system("PAUSE");
	return 0;
}
