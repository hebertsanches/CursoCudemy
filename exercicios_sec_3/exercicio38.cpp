//Leia o sal�rio de um funcion�rio. Calcule e imprima o valor do novo sal�rio, sabendo que
//ele recebeu um aumento de 25%

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	float s,a,ns;
	printf("Digite o valor do sal�rio:\nR$");
	scanf("%f", & s);
	a=s*0.25;
	ns=a+s;
	printf("\nO novo sal�rio com acr�scimo de 25%% � de :R$%0.2f\n", ns);
	getchar();
	system("pause");
	return 0;
}
