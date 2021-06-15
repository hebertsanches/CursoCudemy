//Recebao salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-
//se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso,
//ele paga 7% de imposto sobre o salário-base.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float sb,sr,g,d;
	printf("Digite o salário:\nR$");
	scanf("%f", & sb);
	g=sb*0.05;
	d=sb*0.07;
	sr=sb+g-d;
	printf("\nO salário a receber é de:R$%0.2f\n",sr);
	
	
	getchar();
	system("pause");
	return 0;
}
