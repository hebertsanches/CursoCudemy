#include <iostream>
#include <stdio.h>

//Leia uma distância em quilometros e apresente-a convertida em milhas. A fórmula de
//conversão é: M = K/1,61, sendo K a distância em quilômetros e M em milhas.
int main(int argc, char** argv) 
{
	
	float k, m;
	
	printf("Digite uma distancia em quilometros:\n");
	scanf("%f", & k);
	m = k/1.6;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("%0.2f milhas correspondem a %0.2f milhas \n\n",k,m);
	
	system("PAUSE");
	return 0;
}
