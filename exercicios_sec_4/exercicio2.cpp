#include<stdio.h>
#include<locale.h>
#include<math.h>
//Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz
//quadrada do n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o
//n�mero � inv�lido.
int main(){
	setlocale(LC_ALL, "portuguese");
	int n1;
	float n2;
	printf("Digite um n�mero:\n");
	scanf("%d", &n1);
	if(n1>0){
		n2=sqrt(n1);
		printf("\nA raiz de %d �:%0.2f",n1,n2);
	}else{
		printf("\nN�mero digitado � invalido pois � negativo.");
	}
	
	
	return 0;
}
