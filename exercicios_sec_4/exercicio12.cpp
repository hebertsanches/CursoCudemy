#include<stdio.h>
#include<locale.h>
#include<math.h>
/*Ler um n�mero inteiro. Se o n�mero lido for negativo, escreva a mensagem �N�mero
inv�lido�. Se o n�mero for positivo, calcular o logaritmo deste numero.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x,a;
	printf("Digite um n�mero:\n");
	scanf("%d", & x);
	a=x;
	if(x>0){
		x=log(x);//log sem base
		printf("\nLogaritmo de %d �: %d\n",a,x);
	}else{
		printf("\nN�mero inv�lido.\n");
	}
	
	return 0; 
}
