#include<stdio.h>
#include<locale.h>

//estrutura de repeticao
//do while (faça enquanto)

/*Utilizado quando voce tem um loop onde nao se tenha um numero fixo de 
elementos mas que tenha um criterio de parada e antes de iniciar o loop 
a condicao é checada

Problema

Faça um programa, no qual receba e some numeros inteiros 
até que o numero de entrada seja 0 e apresente a soma*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int numero, soma = 0;
	
	do{
		//entrada
		printf("Informe um número:");
		scanf("%d", &numero);
		
		//processamento
		soma = soma + numero;
	}
	while(numero != 0);
	printf("A soma é %d", soma);
	
	return 0;
}
