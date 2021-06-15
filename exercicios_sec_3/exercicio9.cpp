#include <iostream>
#include <stdio.h>

//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. 
//A fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K 
//a temperatura em Kelvin.
int main(int argc, char** argv) 
{
	
	float temp, k;
	
	printf("Digite uma temperatura em Grau Celcius:\n");
	scanf("%f", & temp);
	k = temp + 273.15;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("%0.2f Grau Celcius correspondem a %0.2f Grau Kelvin \n\n",temp,k);
	
	system("PAUSE");
	return 0;
}
