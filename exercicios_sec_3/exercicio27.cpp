#include<stdio.h>
#include<iostream>
#include<locale>

//Leia um valor de �rea em hectares e apresente-o convertido em metros quadrados m�.
//A f�rmula de convers�o �: M = H*10000, sendo M a �rea em metros quadrados e H
//a �rea em hectares.
int main(){
	
	setlocale(LC_ALL, "portuguese");// permitir acentuacao da lingua portuguesa
	
	float M, H;
	printf("Digite a �rea em Hectares:\n");
	scanf("%f", & H);
	getchar();//limpar buffer do teclado
	M = H*10000;
	printf("%0.2f Hectares corresponde a %0.2f metros�.\n", H, M);
	system("pause");
	return 0;
}
