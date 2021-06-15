#include<stdio.h>
#include<iostream>

//Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula
//de conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em
//metros.

int main(){
	
	float j, m;
	
	printf("Digite um comprimeito em Metros:\n");
	scanf("%f", & m);
	j = m/0.91;
	getchar();
	printf("%0.2f Metros correspondem a %0.2f Jardas.\n", m, j);
	
	system("pause");
	return 0;
}

