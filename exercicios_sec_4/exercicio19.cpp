/*Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou
5, mas não simultaneamente pelos dois.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n,r1,r2;
	printf("Digite um número\n");
	scanf("%d", &n);
	r1=n%3;
	r2=n%5;
	if(r1 == 0 && r2 == 0){}
	else if(r1 == 0){
		printf("\n%d é divisivel por 3.",n);
	}else if(r2 == 0){
		printf("\n%d é divisível por 5",n);
	}else{
		printf("\nNúmeo não divisivel por 3 ou 5.\n");
	}
	
	
	return 0;
}
