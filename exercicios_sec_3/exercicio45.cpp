//Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
//ASCII para resolver o problema.

//OBSERVACAO: TABELA ASCII PARA O ALFABETO TEM UMA DIFERENÇA DE 32 ENTRE MAIUSCULA E 
//MINUSCULA, LOGO SE 'A'=65 ENTAO 'a'=97.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char cmin,cmai;//definindo caractere maiusculo e minusculo
	printf("Digite uma leta maiúscula:\n");
	scanf("%c", & cmai);
	cmin=cmai+32;
	printf("\nMaiúsculo=%c\nMinúsculo=%c\n",cmai,cmin);
	getchar();
	system("pause");
	return 0;
	
	
	
}
