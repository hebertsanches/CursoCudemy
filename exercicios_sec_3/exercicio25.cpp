#include<stdio.h>
#include<iostream>
#include<locale.h>

//Leia um valor de �rea em acres e apresente-o convertido em metros quadrados m?. �
//f�rmula de convers�o �: M = A * 4048,58, sendo M a �rea em metros quadrados e � a
//�rea em acres.

int main(){
	
	float A, M;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o valor da �rea em Acres:\n");
	scanf("%f", & A);
	M = A*4048.58;
	printf("%0.2f Acre(s) corresponde a %0.2f Metros�.\n", A, M);
	system ("pause");
	return 0;
	
	
}
