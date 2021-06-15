//Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.
//A área do circulo é Pi*raio², considere Pi = 3.141592.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float r,a;
	
	printf("Digite o valor do Raio da circunferência:");
	scanf("%f", & r);
	a=3.141592*(r*r);
	printf("A área da circunferência é:%0.2f\n",a);
	getchar();//limpar buffer do teclado
	system("pause");
	return 0;
	
}

