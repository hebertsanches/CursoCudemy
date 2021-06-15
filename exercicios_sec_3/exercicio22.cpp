#include<stdio.h>
#include<iostream>

//Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula
//de conversão é: M = 0,91*J, sendo J o comprimento em jardas e M o comprimento
//em metros.

int main(){
	
	float j, m;
	
	printf("Digite um comprimento em Jardas:\n");
	scanf("%f", & j);
	m = j*0.91;
	getchar ();
	printf("%0.2f Jardas correspondem a %0.2f Metros.",j, m);
	
	system("PAUSE");
	return 0;
}

