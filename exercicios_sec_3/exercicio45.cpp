//Fa�a um programa para converter uma letra mai�scula em letra min�scula. Use a tabela
//ASCII para resolver o problema.

//OBSERVACAO: TABELA ASCII PARA O ALFABETO TEM UMA DIFEREN�A DE 32 ENTRE MAIUSCULA E 
//MINUSCULA, LOGO SE 'A'=65 ENTAO 'a'=97.

#include<stdio.h>
#include<iostream>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char cmin,cmai;//definindo caractere maiusculo e minusculo
	printf("Digite uma leta mai�scula:\n");
	scanf("%c", & cmai);
	cmin=cmai+32;
	printf("\nMai�sculo=%c\nMin�sculo=%c\n",cmai,cmin);
	getchar();
	system("pause");
	return 0;
	
	
	
}
