#include <iostream>
#include <stdio.h>
#include<math.h>
#define PI 3.14159265359

//Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão
//é: G = R*180/PI, sendo G o ângulo em graus e R em radianos e PI = 3.14.
int main(int argc, char** argv) 
{
	
	float g, r;
	
	printf("Digite o valor do angulo em radianos:\n");
	scanf("%f", & r);
	g = r*180/PI;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("\n%0.2f graus correspondem a %0.4f graus \n\n",r,g);
	
	system("PAUSE");
	return 0;
}
