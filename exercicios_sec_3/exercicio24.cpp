#include<iostream>
#include<stdio.h>
#include <locale.h>

//Leia um valor de área em metros quadrados m²? e apresente-o convertido em acres. À
//fórmula de conversão é: A = M * 0,000247, sendo M a área em metros quadrados e A a
//área em acres.

int main(){
	setlocale(LC_ALL, "Portuguese");//permite acentuacao
	
	float A, M;
	
	printf("Digite o valor da área em metros²: \n");
	scanf("%f", & M);
	A = M*0.000247;
	printf("%0.2f Metros² correspondem a %0.2f Acres: \n", M, A);
	
	system("pause");
	return 0;
}
