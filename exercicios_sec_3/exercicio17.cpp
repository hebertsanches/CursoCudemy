#include <iostream>
#include <stdio.h>

//Leia um valor de comprimento em cent�metros e apresente-o convertido em polegadas.
//A f�rmula de convers�o �: P = C/2.54 sendo C o comprimento em cent�metros e P o
//comprimento em polegadas.
int main(int argc, char** argv) 
{
	
	float p, c;
	
	printf("Digite um comprimento em centimetros :\n");
	scanf("%f", & c);
	p = c/2.54;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("\n%0.2f centimetros correspondem a %0.2f polegadas\n\n",c,p);
	
	system("PAUSE");
	return 0;
}
