#include <iostream>
#include <stdio.h>

//Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula
//de conversão é: L = K/0.45 sendo K a massa em quilogramas e L. a massa em libras.
int main(int argc, char** argv) 
{
	
	float k, l;
	
	printf("Digite o valor da massa em Quilogramas:\n");
	scanf("%f", & k);
	l = k/0.45;
	getchar(); //limpa buffer do teclado bom colocar sempre
	printf("\n%0.2f Quilogramas correspondem a %0.2f Libras \n\n",k,l);
	
	system("PAUSE");
	return 0;
}
