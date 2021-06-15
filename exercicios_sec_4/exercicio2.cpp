#include<stdio.h>
#include<locale.h>
#include<math.h>
//Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
//quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
//número é inválido.
int main(){
	setlocale(LC_ALL, "portuguese");
	int n1;
	float n2;
	printf("Digite um número:\n");
	scanf("%d", &n1);
	if(n1>0){
		n2=sqrt(n1);
		printf("\nA raiz de %d é:%0.2f",n1,n2);
	}else{
		printf("\nNúmero digitado é invalido pois é negativo.");
	}
	
	
	return 0;
}
