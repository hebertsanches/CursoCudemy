#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
//Escreva um programa que leia as coordenadas x e y de pontos no R² e calcule sua
//distância da origem (0,0).
int main(){
	
	setlocale(LC_ALL, "portuguese");
	float x,y,d,c;
	printf("Digite a cordenada de X.\n");
	scanf("%f", & x);
	printf("\nDigite a cordenada de Y.");
	scanf("%f", & y);
	d=(x*x)+(y*y);
	c=sqrt(d);//sqrt extrai a raiz quadrada.
	printf("\nA distância da origem é: %0.2f\n",c);
	getchar();
	system("pause");
	return 0;
	
}
