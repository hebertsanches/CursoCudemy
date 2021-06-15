/*1. Faça um programa que determine o mostre os cinco primeiros múltiplos
de 3, considerando números maiores que O.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,n=0;
	printf("Os CINCO primeiros multiplos de 3 são:\n");
	for(i=1; i<=5; i++){
		n=n+3;
		
		printf("%d\n",n);
	}
	return 0;
}
