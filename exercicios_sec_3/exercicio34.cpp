//Leia o valor do raio de um c�rculo e calcule e imprima a �rea do c�rculo correspondente.
//A �rea do circulo � Pi*raio�, considere Pi = 3.141592.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float r,a;
	
	printf("Digite o valor do Raio da circunfer�ncia:");
	scanf("%f", & r);
	a=3.141592*(r*r);
	printf("A �rea da circunfer�ncia �:%0.2f\n",a);
	getchar();//limpar buffer do teclado
	system("pause");
	return 0;
	
}

