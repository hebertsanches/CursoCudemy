//Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar
//subindo a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir
//seu objetivo.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	int di,df,qt;
	printf("Digite o n�mero do degrau em que voce esta:");
	scanf("%d", & di);
	printf("\nDigite o n�mero do degrau que deseja alcan�ar:");
	scanf("%d", & df);
	qt=df-di;
	printf("\nPara chegar at� o degrau %d voce devera percorrer %d degraus.\n",df,qt);
	getchar();
	system("pause");
	return 0;
}
