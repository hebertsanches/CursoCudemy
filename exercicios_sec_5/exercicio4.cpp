/*Escreva um programa que declare um inteiro, inicialize-o com O, e incremente-o 
de 1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 
100000 (cem mil).*/

#include<stdio.h>

int main(){
	
	int i=0;
	do{
		i=i+1000;
		printf("%d\n",i);
	}while(i<100000);
	
	
	return 0;
}
