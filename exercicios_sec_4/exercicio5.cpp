#include<stdio.h>
#include<locale.h>

//Faça um programa que receba um número inteiro e verifique se este número é par ou
//ímpar.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n1, r;
	printf("Digite um número:\n");
	scanf("%d", &n1);
	r=n1%2;
	if(r==0){
		printf("\nNúmero digitado é par.");
	}else{
		printf("\nNúmero digitado é ímpar.");
	}
	
	return 0;
}
