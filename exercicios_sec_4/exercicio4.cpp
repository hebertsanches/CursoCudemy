#include<stdio.h>
#include<locale.h>
#include<math.h>
//Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
//* O n�mero digitado ao quadrado
//* Araiz quadrada do n�mero digitado
int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1,n2,r;
	printf("Digite um n�mero:\n");
	scanf("%f", &n1);
	if(n1>0){
		n2=n1*n1;
		r=sqrt(n1);
		printf("\n%0.2f ao quadrado �: %0.2f\n",n1,n2);
		printf("\nA raiz quadrada de %0.2f �: %0.2f\n",n1,r);
	}else if(n1<-10){
		printf("\nO n�mero digitado n�o � aceito por ser negativo.");
	}
	
	return 0;
}
