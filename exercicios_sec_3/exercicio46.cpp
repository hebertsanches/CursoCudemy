//Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999).
//Gere outro número formado pelos dígitos invertidos do número lido. Exemplo:
//NúmeroLido = 123
//NúmeroGerado = 321.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//o processo é dividir por 10 o numero inteiro e pegar o resto(cifra)
// por ex. 123%10 = 3 pois % pega somente a cifra, como 123 nao é
//divisivel por 10 mas 120 é, sobra 3.
// entao 120/10 é 12, logo dividimos 12%10, como 12 nao é
//divisivel por 10 mas 10 é, sobra 2, que é cifra. logo dividimos 1%10, como 1 nao é
//divisivel por 10 mas e tratamos de inteiros sobra 1 como cifra.
 
int main() {
 
 setlocale(LC_ALL, "portuguese");
 
 int numero,cifra;
 
 printf("Digite um número positivo inteiro:\n");
 scanf("%d", &numero);
 
 if (numero >= 0){
 	printf("o inverso de %d é:", numero);
 	do{
 		cifra = numero%10;//cifra é a sobra do numero dividido por 10
 		printf("%i", cifra);
 		numero /= 10;
 		
	 }while (numero != 0);//fazer isso enquanto meu numero for diferente de 0
	 //printf("O inverso é: %d\n",cifra);
	 printf("\n");
 }
 
 else if (numero<1)
 {
 	numero = numero * -1;
 	
 	printf("\nDigite um numero positivo:\n");
 	
 }
 getchar();
 system("pause");
 return 0;
 
 
}
