#include <iostream>
#include <stdio.h>

//Leia uma temperatura em graus celcius e aprensente-a em graus Fahrenheit.
//A formula de conversao é F = C*(9.0/5.0)+32.0.
int main(int argc, char** argv) 
{
	
	float temp, f;
	
	printf("Digite uma temperatura em graus Celcius:\n");
	scanf("%f", & temp);
	f = temp*9/5+32;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("A quinta parte de %0.2f eh: %0.2f\n\n",temp,f);
	
	system("PAUSE");
	return 0;
}
