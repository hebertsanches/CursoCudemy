//Leia um n�mero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
//seu dobro.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int n,s,t,d;
	printf("Digite um n�mero:\n");
	scanf("%d", & n);
	t=n*3+1;
	d=n*2-1;
	s=t+d;
	printf("A soma do sucessor de seu triplo com o antecessor de seu dobro �: %d.\n",s);
	system("pause");
	return 0;
}
