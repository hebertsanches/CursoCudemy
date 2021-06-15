/*2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes.
A primeira vez deve usar a estrutura de repetição for, a segunda while, e a 
terceira do while.*/

#include<stdio.h>

int main(){
	int a,b=0,i;
	for(i=1; i<=100; i++){
		printf("utilizando FOR:");
		printf("%d\n",i);
	}
	printf("\n");
	while(a<100){
		a=a+1;
		printf("Utilizando WHILE:");
		printf("%d\n",a);
	}
	printf("\n");
	do{
		b=b+1;
	printf("Utilizando DO WHILE:");
	printf("%d\n",b);
	}
	while(b<100);
	
	return 0;
}
