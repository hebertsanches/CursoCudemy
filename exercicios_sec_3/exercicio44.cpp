//Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
//subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
//seu objetivo.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	int di,df,qt;
	printf("Digite o número do degrau em que voce esta:");
	scanf("%d", & di);
	printf("\nDigite o número do degrau que deseja alcançar:");
	scanf("%d", & df);
	qt=df-di;
	printf("\nPara chegar até o degrau %d voce devera percorrer %d degraus.\n",df,qt);
	getchar();
	system("pause");
	return 0;
}
