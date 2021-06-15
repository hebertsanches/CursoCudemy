#include<stdio.h>
#include<iostream>
#include <locale.h>

//Leia um valor de área em metros quadrados m? e apresente-o convertido em hectares.
//AA fórmula de conversão é: H = M * 0,0001, sendo M a área em metros quadrados e H
//a área em hectares.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float M, H;
	
	printf("Digige o valor de uma área em metros²:\n");
	scanf("%f", & M);
	getchar();
	H = M*0.0001;
	printf("%0.2f Metros² correspondem a %0.2f Hectares.\n", M, H);
	
	system("pause");
	return 0;
}
