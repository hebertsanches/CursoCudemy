#include<stdio.h>
#include<iostream>
#include <locale.h>

//Leia um valor de �rea em metros quadrados m? e apresente-o convertido em hectares.
//AA f�rmula de convers�o �: H = M * 0,0001, sendo M a �rea em metros quadrados e H
//a �rea em hectares.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float M, H;
	
	printf("Digige o valor de uma �rea em metros�:\n");
	scanf("%f", & M);
	getchar();
	H = M*0.0001;
	printf("%0.2f Metros� correspondem a %0.2f Hectares.\n", M, H);
	
	system("pause");
	return 0;
}
