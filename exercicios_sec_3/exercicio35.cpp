//Sejam a e b os catetos de um tri�ngulo, onde a hipotenusa � obtida pela equa��o:
//hipotenusa = va�+b�. Fa�a um programa que receba os valores de a e b e calcule
//o valor da hipotenusa atrav�s da equa��o. Imprima o resultado dessa opera��o.

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
	printf("\nA hipotenusa desse triangulo �:%0.2f\n", r);
	system("pause");
	return 0; 
	
}
