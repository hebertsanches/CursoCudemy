#include<stdio.h>
#include<locale.h>

//estrutura de repeticao
//while
/*utilizado quando voce precisa de um loop 
onde não se tenha um numero fixo de elementos, mas que tenha um criterio de parada
e antes de iniciar um loop a condiçao é chegada*/

/*Faça um programa, no qual receba e some 
5 numeros inteiros at;e que o numero de entrada seja 0 e apresente a soma ao final*/

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero, soma=0;
	printf("Informe um número:");
	scanf("%d", & numero);
	
	while(numero != 0){
		soma = soma + numero;
		//entrada
		printf("Informe um número:");
		scanf("%d", & numero);
	}
	
	printf("A soma é %d", soma);
	
	return 0;
}

