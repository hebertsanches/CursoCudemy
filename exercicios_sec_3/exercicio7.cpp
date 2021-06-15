#include <iostream>
#include <stdio.h>

//Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
// A fórmula de conversão é: C = 5.0*(F-32.0)/9.0, sendo C a temperatura em Celsius 
//e F a temperatura em Fahrenheit.
int main(int argc, char** argv) 
{
	
	float temp, f;
	
	printf("Digite uma temperatura em Grau Fahrenheit:\n");
	scanf("%f", & temp);
	f = 5*(temp-32)/9;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("%0.2f Grau Fahrenheit correspondem a %0.2f Grau Celcius \n\n",temp,f);
	
	system("PAUSE");
	return 0;
}
