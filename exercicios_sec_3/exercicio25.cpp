#include<stdio.h>
#include<iostream>
#include<locale.h>

//Leia um valor de área em acres e apresente-o convertido em metros quadrados m?. À
//fórmula de conversão é: M = A * 4048,58, sendo M a área em metros quadrados e À a
//área em acres.

int main(){
	
	float A, M;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o valor da área em Acres:\n");
	scanf("%f", & A);
	M = A*4048.58;
	printf("%0.2f Acre(s) corresponde a %0.2f Metros².\n", A, M);
	system ("pause");
	return 0;
	
	
}
