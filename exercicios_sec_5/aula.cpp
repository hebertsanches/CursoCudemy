/*ESTRTURAS DE REPETIÇAO*/

#include<stdio.h>
#include<locale.h>
//utilizando o for(para)
/*Faça um programa, no qual receba e some 5 numeros inteiros e apresente a soma no final*/
int main(){
	setlocale(LC_ALL,"portuguese");
	
	//variaveis
	int numero,soma=0;
	//para o int i iniciando em 0; enquanto i < 5; incremente o i em 1
	//inicializacao, criterio de parada, forma de incremento
	for(int i= 0; i < 5; i++){
	
		//entrada
		printf("Informe um numero.\n");
		scanf("%d", &numero);
	
	
		//processamento
		soma = soma + numero;
	}
	
	//saida
	printf("A soma é %d", soma);
	return 0;
}
