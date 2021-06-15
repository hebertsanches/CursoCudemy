#include <iostream>
#include <stdio.h>

//Leia uma velocidade em ms (metros por segundo) e apresente-a convertida em km/h
//(quilômetros por hora). A fórmula de conversão é: K = M * 3.6, sendo K a velocidade
//em km/h e M em ms.
int main(int argc, char** argv) 
{
	
	float k, m;
	
	printf("Digite uma velocidade em m/s:\n");
	scanf("%f", & m);
	k = m*3.6;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("%0.2f m/s correspondem a %0.2f km/h \n\n",m,k);
	
	system("PAUSE");
	return 0;
}
