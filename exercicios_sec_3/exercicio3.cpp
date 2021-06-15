#include <iostream>
#include <stdio.h>

//Peça ao usuario para digitar tres valores inteiros e imprima a soma deles
int main(int argc, char** argv) 
{
	
	int num1, num2, num3, soma;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", & num1);
	printf("Digite o segundo numero:\n");
	scanf("%d", & num2);
	printf("Digite o terceiro numero:\n");
	scanf("%d", & num3);
	soma = num1+num2+num3;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("A soma de %d+%d+%d eh: %d\n\n",num1,num2,num3,soma);
	
	system("PAUSE");
	return 0;
}
