//Fa�a um programa que leia um n�mero inteiro positivo de tr�s d�gitos (de 100 a 999).
//Gere outro n�mero formado pelos d�gitos invertidos do n�mero lido. Exemplo:
//N�meroLido = 123
//N�meroGerado = 321.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//o processo � dividir por 10 o numero inteiro e pegar o resto(cifra)
// por ex. 123%10 = 3 pois % pega somente a cifra, como 123 nao �
//divisivel por 10 mas 120 �, sobra 3.
// entao 120/10 � 12, logo dividimos 12%10, como 12 nao �
//divisivel por 10 mas 10 �, sobra 2, que � cifra. logo dividimos 1%10, como 1 nao �
//divisivel por 10 mas e tratamos de inteiros sobra 1 como cifra.
 
int main() {
 
 setlocale(LC_ALL, "portuguese");
 
 int numero,cifra;
 
 printf("Digite um n�mero positivo inteiro:\n");
 scanf("%d", &numero);
 
 if (numero >= 0){
 	printf("o inverso de %d �:", numero);
 	do{
 		cifra = numero%10;//cifra � a sobra do numero dividido por 10
 		printf("%i", cifra);
 		numero /= 10;
 		
	 }while (numero != 0);//fazer isso enquanto meu numero for diferente de 0
	 //printf("O inverso �: %d\n",cifra);
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
