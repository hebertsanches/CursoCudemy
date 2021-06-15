#include <iostream>
#include <stdio.h>

//Leia um numero real e imprima a quinta parte deste numero
int main(int argc, char** argv) 
{
	
	float num, div;
	
	printf("Digite um numero:\n");
	scanf("%f", & num);
	div = num/5;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("A quinta parte de %0.2f eh: %0.2f\n\n",num,div);
	
	system("PAUSE");
	return 0;
}
