//Leia um n�mero inteiro e imprima o seu antecessor e o seu sucessor.
#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int n,a,s;
	printf("Digite um numero:\n");
	scanf("%d", & n);
	a=n+1;
	s=n-1;
	printf("\nO sucessor de %d �:%d\n",n,a);
	printf("\nO antecessor de %d �:%d\n",n,s);
	getchar();
	system("pause");
	return 0;
}
