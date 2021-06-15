/*Escreva o menu de op��es abaixo. Leia a op��o do usu�rio e execute a opera��o esco-
Ihida. Escreva uma mensagem de erro se a op��o for inv�lida.

Escolha a op��o:

1- Soma de 2 n�meros.

2- Diferen�a entre 2 n�meros (maior pelo menor).

3- Produto entre 2 n�meros.

4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero).
op��o*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float a,b,x;
	int var;
	printf("Escolha uma das op��es abaixo:\n1- Soma de 2 n�meros.\n2- Diferen�a entre 2 n�meros (maior pelo menor).\n3- Produto entre 2 n�meros.\n4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero).\nOP��O:");
	scanf("%d", &var);
	switch(var){
		case 1:
			printf("\n1- Soma de 2 n�meros.\n\nDigite dois n�meros:\n");
			scanf("%f %f", &a, &b);
			x=a+b;
			printf("A Soma de %0.2f e %0.2f �:%0.2f",a,b,x);
			break;
			case 2:
				printf("\n2- Diferen�a entre 2 n�meros (maior pelo menor).\n\nDigite dois n�meros:\n");
				scanf("%f %f", &a, &b);
				if(a>b){
					x=a-b;
					printf("\nA diferen�a (maior pelo menor) entre %0.2f e %0.2f �:%0.2f\n",a,b,x);
				}else if(b>a){
					x=b-a;
					printf("\nA diferen�a (maior pelo menor) entre %0.2f e %0.2f �:%0.2f\n",b,a,x);
				}else{
					printf("\nOs n�meros s�o iguais:\n");
				}break;
				case 3:
					printf("\n3- Produto entre 2 n�meros.\n\nDigite dois n�meros:\n");
					scanf("%f %f", &a, &b);
					x=a*b;
					printf("\nO produto de %0.2f e %0.2f �:%0.2f",a,b,x);
					break;
					case 4:
						printf("\n4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero).\n\nDigite dois n�meros:\n");
						scanf("%f %f", &a, &b);
						if(a>=b || b>=a && a!=0 && b!=0){
							x=a/b;
							printf("\nA divis�o de %0.2f e %0.2f �:%0.2f\n",a,b,x);
						}else{
							printf("\nN�mero inv�lido.\n");
						}break;
						default:{
						printf("\nERRO\n");
						}
	}
	return 0;
}
