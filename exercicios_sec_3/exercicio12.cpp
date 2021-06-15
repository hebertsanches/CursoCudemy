#include <iostream>
#include <stdio.h>

//Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
//conversão é: K = 1,61 * M, sendo K a distância em quilômetros e M em milhas.
int main(int argc, char** argv) 
{
	
	float k, m;
	
	printf("Digite uma distancia em milhas:\n");
	scanf("%f", & m);
	k = m*1.6;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("%0.2f milhas correspondem a %0.2f quilometros \n\n",m,k);
	
	system("PAUSE");
	return 0;
}
