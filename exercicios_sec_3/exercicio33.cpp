//Leia o tamanho do lado de um quadrado e imprima como resultado a sua �rea.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float n,a;
	printf("Digite o tamanho do lado do Quadrado:\n");
	scanf("%f", & n);
	a=n*n;
	printf("A �rea do quadrado de lado %0.2f � %0.2f\n",n,a);
	system("pause");
	return 0;
}
