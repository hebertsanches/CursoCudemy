#include<stdio.h>
#include<locale.h>
#include<math.h>
/*Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste numero.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x,a;
	printf("Digite um número:\n");
	scanf("%d", & x);
	a=x;
	if(x>0){
		x=log(x);//log sem base
		printf("\nLogaritmo de %d é: %d\n",a,x);
	}else{
		printf("\nNúmero inválido.\n");
	}
	
	return 0; 
}
