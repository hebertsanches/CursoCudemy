#include<stdio.h>
#include<locale.h>
#include<math.h>
//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
//* O número digitado ao quadrado
//* Araiz quadrada do número digitado
int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1,n2,r;
	printf("Digite um número:\n");
	scanf("%f", &n1);
	if(n1>0){
		n2=n1*n1;
		r=sqrt(n1);
		printf("\n%0.2f ao quadrado é: %0.2f\n",n1,n2);
		printf("\nA raiz quadrada de %0.2f é: %0.2f\n",n1,r);
	}else if(n1<-10){
		printf("\nO número digitado não é aceito por ser negativo.");
	}
	
	return 0;
}
