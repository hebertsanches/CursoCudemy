#include<stdio.h>
#include<locale.h>
//Faça um programa que receba dois números e mostre qual deles é o maior.

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1,n2;
	printf("Digite dois números:");
	scanf("%f %f", &n1, &n2);
	if(n1>n2){
		printf("\n%0.2f é maior que %0.2f. O primeiro número digitado é maior que o segundo.",n1,n2);
	}else if(n1<n2){
		printf("\n%0.2f é maior que %0.2f.O segundo número digitado é maior que o primeiro. ",n2,n1);
	}else{
		printf("\nOs números são iguais.\n");
	}
	getchar();
	return 0;
}
