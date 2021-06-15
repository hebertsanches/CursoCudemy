#include <iostream>


//Faça um programa que leia um numero inteiro e o imprima
int main(int argc, char const *argv[]) 
{
	
	int numero;
	
	printf("Digite um numero:\n");
	scanf("%f", & numero);// %f para ler o FLOAT
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("O numero digitado foi: %f\n\n",numero);
	
	system("PAUSE");
	return 0;
}
