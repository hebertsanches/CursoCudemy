//Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
//trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre
//o valor calculado.
#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float vh,th,pg,ac;
	printf("Digite o valor pago por hora de trabalho:\nR$");
	scanf("%f", & vh);
	printf("\nDigite a quantidade de horas trabalhadas no mês:");
	scanf("%f", & th);
	ac=(vh*th)*0.10;
	pg=(vh*th)+ac;
	printf("\nO valor a ser pago é de:\nR$%0.2f", pg);
	getchar();
	system("pause");
	return 0;
	
}
