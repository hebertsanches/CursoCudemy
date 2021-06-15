//Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que
//ele recebeu um aumento de 25%

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	float s,a,ns;
	printf("Digite o valor do salário:\nR$");
	scanf("%f", & s);
	a=s*0.25;
	ns=a+s;
	printf("\nO novo salário com acréscimo de 25%% é de :R$%0.2f\n", ns);
	getchar();
	system("pause");
	return 0;
}
