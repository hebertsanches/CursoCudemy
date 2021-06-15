#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<stdio.h>

//Escreva um programa que leia um n�mero inteiro maior do que zero e devolva, natela, a
//soma de todos os seus algarismos. Por exemplo, ao n�mero 251 corresponder� o valor
//8(2+5+1). Se o n�mero lido n�o for maior do que zero, o programa terminar� com a
//mensagem �N�mero inv�lido�.


//o processo � dividir por 10 o numero inteiro e pegar o resto(cifra)
// por ex. 123%10 = 3 pois % pega somente a cifra, como 123 nao �
//divisivel por 10 mas 120 �, sobra 3.
// entao 120/10 � 12, logo dividimos 12%10, como 12 nao �
//divisivel por 10 mas 10 �, sobra 2, que � cifra. logo dividimos 1%10, como 1 nao �
//divisivel por 10 mas e tratamos de inteiros sobra 1 como cifra.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n1,s,d;
	printf("Digite um n�mero:");
	scanf("%d", &n1);
	d=n1;//para exibir o numero no printf la em baixo
	if(n1>=0){
		do{
			s=s+n1%10;
			n1/=10;
		}while(n1 !=0);
		printf("\nA samoda dos algarismos do n�mero %d �:%d",d,s);
	}else{
		printf("\nN�mero inv�lido.\n");
	}
	return 0;
}
