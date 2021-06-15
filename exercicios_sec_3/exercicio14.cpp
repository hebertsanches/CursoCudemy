#include <iostream>
#include <stdio.h>
#include<math.h>
#define PI 3.14159265359

//Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão
//é: R=G*3.14/180, sendo G o ângulo em graus e R em radianos e PI = 3.14.
int main(int argc, char** argv) 
{
	
	float g, r;
	
	printf("Digite o valor do angulo em graus:\n");
	scanf("%f", & g);
	r = g*PI/180;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("\n%0.2f graus correspondem a %0.6f radianos \n\n",g,r);
	
	system("PAUSE");
	return 0;
}
