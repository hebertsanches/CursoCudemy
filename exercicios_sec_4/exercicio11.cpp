#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<stdio.h>

//Escreva um programa que leia um número inteiro maior do que zero e devolva, natela, a
//soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor
//8(2+5+1). Se o número lido não for maior do que zero, o programa terminará com a
//mensagem “Número inválido”.


//o processo é dividir por 10 o numero inteiro e pegar o resto(cifra)
// por ex. 123%10 = 3 pois % pega somente a cifra, como 123 nao é
//divisivel por 10 mas 120 é, sobra 3.
// entao 120/10 é 12, logo dividimos 12%10, como 12 nao é
//divisivel por 10 mas 10 é, sobra 2, que é cifra. logo dividimos 1%10, como 1 nao é
//divisivel por 10 mas e tratamos de inteiros sobra 1 como cifra.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n1,s,d;
	printf("Digite um número:");
	scanf("%d", &n1);
	d=n1;//para exibir o numero no printf la em baixo
	if(n1>=0){
		do{
			s=s+n1%10;
			n1/=10;
		}while(n1 !=0);
		printf("\nA samoda dos algarismos do número %d é:%d",d,s);
	}else{
		printf("\nNúmero inválido.\n");
	}
	return 0;
}
