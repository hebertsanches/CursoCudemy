#include <iostream>
#include <stdio.h>

//Leia um numero real e imprima o resultado do quadrado desse numero
int main(int argc, char** argv) 
{
	
	float num, quad;
	
	printf("Digite um numero:\n");
	scanf("%f", & num);
	quad = num*num;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("O quadrado de %0.2f eh: %0.2f\n\n",num,quad);
	
	system("PAUSE");
	return 0;
}
