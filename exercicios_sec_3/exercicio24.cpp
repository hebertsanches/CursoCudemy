#include<iostream>
#include<stdio.h>
#include <locale.h>

//Leia um valor de �rea em metros quadrados m�? e apresente-o convertido em acres. �
//f�rmula de convers�o �: A = M * 0,000247, sendo M a �rea em metros quadrados e A a
//�rea em acres.

int main(){
	setlocale(LC_ALL, "Portuguese");//permite acentuacao
	
	float A, M;
	
	printf("Digite o valor da �rea em metros�: \n");
	scanf("%f", & M);
	A = M*0.000247;
	printf("%0.2f Metros� correspondem a %0.2f Acres: \n", M, A);
	
	system("pause");
	return 0;
}
