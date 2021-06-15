//Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
//hipotenusa = va²+b². Faça um programa que receba os valores de a e b e calcule
//o valor da hipotenusa através da equação. Imprima o resultado dessa operação.

#include<stdio.h>
#include<iostream>
#include<locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float a,b,h,r;
	
	printf("Digite o valor do cateto A & B:\n");
	scanf("%f""%f", & a, &b);
	h=(a*a)+(b*b);
	r=sqrt(h);
	printf("\nA hipotenusa desse triangulo é:%0.2f\n", r);
	system("pause");
	return 0; 
	
}
