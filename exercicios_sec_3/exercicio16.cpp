#include <iostream>
#include <stdio.h>

//Leia um valor de comprimento em polegadas e apresente-o convertido em cent�metros.
//.A f�rmula de convers�o �: C = P*2,54, sendo C o comprimento em cent�metros e P o
//comprimento em polegadas.
int main(int argc, char** argv) 
{
	
	float p, c;
	
	printf("Digite um comprimento em polegadas:\n");
	scanf("%f", & p);
	c = p*2.54;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("\n%0.2f polegada correspondem a %0.2f centimetros \n\n",p,c);
	
	system("PAUSE");
	return 0;
}
