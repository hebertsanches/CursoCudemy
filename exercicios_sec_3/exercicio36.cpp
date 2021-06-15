//Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
//de um cilindro circular é calculado por meio da seguinte fórmula: V = Pi*raio²*altura,
//onde Pi=3.141592.

#include<stdio.h>
#include<iostream>
#include<locale.h>

#define pi 3.141592//declarar constante
int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float h,r,v;
	printf("Digite a Altura e o Raio do cilindro respectivamente:\n");
	scanf("%f" "%f", & h, &r);
	v=pi*(r*r)*h;
	printf("\nO volume do cilindro é: %0.2f\n", v);
	system("pause");
	return 0;
	
}

