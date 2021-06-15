#include<stdio.h>
#include<iostream>
#include<locale>

//Leia um valor de área em hectares e apresente-o convertido em metros quadrados m².
//A fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H
//a área em hectares.
int main(){
	
	setlocale(LC_ALL, "portuguese");// permitir acentuacao da lingua portuguesa
	
	float M, H;
	printf("Digite a área em Hectares:\n");
	scanf("%f", & H);
	getchar();//limpar buffer do teclado
	M = H*10000;
	printf("%0.2f Hectares corresponde a %0.2f metros².\n", H, M);
	system("pause");
	return 0;
}
