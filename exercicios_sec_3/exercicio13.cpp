#include <iostream>
#include <stdio.h>

//Leia uma dist�ncia em quilometros e apresente-a convertida em milhas. A f�rmula de
//convers�o �: M = K/1,61, sendo K a dist�ncia em quil�metros e M em milhas.
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
