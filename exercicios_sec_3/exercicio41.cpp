//Fa�a um programa que leia o valor da hora de trabalho (em reais) e n�mero de horas
//trabalhadas no m�s. Imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre
//o valor calculado.
#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float vh,th,pg,ac;
	printf("Digite o valor pago por hora de trabalho:\nR$");
	scanf("%f", & vh);
	printf("\nDigite a quantidade de horas trabalhadas no m�s:");
	scanf("%f", & th);
	ac=(vh*th)*0.10;
	pg=(vh*th)+ac;
	printf("\nO valor a ser pago � de:\nR$%0.2f", pg);
	getchar();
	system("pause");
	return 0;
	
}
