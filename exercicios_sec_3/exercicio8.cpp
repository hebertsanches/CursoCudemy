#include <iostream>
#include <stdio.h>

//Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius.
//A fórmula de conversão é: C = K - 273.15, sendo C a temperatura em Celsius e K 
//a temperatura em Kelvin. 
int main(int argc, char** argv) 
{
	
	float temp, c;
	
	printf("Digite uma temperatura em Grau Kelvin:\n");
	scanf("%f", & temp);
	c = temp - 273.15;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("%0.2f Grau Kelvin correspondem a %0.2f Grau Celcius \n\n",temp,c);
	
	system("PAUSE");
	return 0;
}
