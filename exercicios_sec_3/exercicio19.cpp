#include <iostream>
#include <stdio.h>

//Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³. A
//fórmula de conversão é: M = L/1000, sendo L o volume em litros e M o volume em metros
//cúbicos.
int main(int argc, char** argv) 
{
	
	float m, l;
	
	printf("Digite o volume em litros:\n");
	scanf("%f", & l);
	m = l/1000;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("\n%0.2f litros correspondem a %0.2f metros cubicos \n\n",l,m);
	
	system("PAUSE");
	return 0;
}
