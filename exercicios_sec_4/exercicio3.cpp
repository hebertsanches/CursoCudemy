#include<stdio.h>
#include<locale.h>
#include<math.h>

//Leia um numero real. Se o n�mero for positivo imprima a raiz quadrada. Do contr�rio,
//imprima o numero ao quadrado.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float n1,n2;
	printf("Digite um n�mero:");
	scanf("%f", &n1);
	if(n1>0){
		n2=sqrt(n1);
		printf("\nA raiz de %0.2f �:%0.2f",n1,n2);
	}else{
		n2=n1*n1;
		printf("\n%0.2f ao quadrado �:%0.2f",n1,n2);
	}
	
	return 0;
}
