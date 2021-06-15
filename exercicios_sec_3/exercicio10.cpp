#include <iostream>
#include <stdio.h>

//Leia uma velocidade em km/h (quilómetros por hora) e apresente-a convertida 
//em m/s (metros por segundo). A fórmula de conversão é: M = K/3.6, sendo I< 
//a velocidade em km/h e M em m/s.
int main(int argc, char** argv) 
{
	
	float k, m;
	
	printf("Digite uma velocidade em km/h:\n");
	scanf("%f", & k);
	m = k/3.6;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("%0.2f km/h correspondem a %0.2f m/s \n\n",k,m);
	
	system("PAUSE");
	return 0;
}
