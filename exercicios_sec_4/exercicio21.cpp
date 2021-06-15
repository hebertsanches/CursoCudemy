/*Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação esco-
Ihida. Escreva uma mensagem de erro se a opção for inválida.

Escolha a opção:

1- Soma de 2 números.

2- Diferença entre 2 números (maior pelo menor).

3- Produto entre 2 números.

4- Divisão entre 2 números (o denominador não pode ser zero).
opção*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float a,b,x;
	int var;
	printf("Escolha uma das opções abaixo:\n1- Soma de 2 números.\n2- Diferença entre 2 números (maior pelo menor).\n3- Produto entre 2 números.\n4- Divisão entre 2 números (o denominador não pode ser zero).\nOPÇÃO:");
	scanf("%d", &var);
	switch(var){
		case 1:
			printf("\n1- Soma de 2 números.\n\nDigite dois números:\n");
			scanf("%f %f", &a, &b);
			x=a+b;
			printf("A Soma de %0.2f e %0.2f é:%0.2f",a,b,x);
			break;
			case 2:
				printf("\n2- Diferença entre 2 números (maior pelo menor).\n\nDigite dois números:\n");
				scanf("%f %f", &a, &b);
				if(a>b){
					x=a-b;
					printf("\nA diferença (maior pelo menor) entre %0.2f e %0.2f é:%0.2f\n",a,b,x);
				}else if(b>a){
					x=b-a;
					printf("\nA diferença (maior pelo menor) entre %0.2f e %0.2f é:%0.2f\n",b,a,x);
				}else{
					printf("\nOs números são iguais:\n");
				}break;
				case 3:
					printf("\n3- Produto entre 2 números.\n\nDigite dois números:\n");
					scanf("%f %f", &a, &b);
					x=a*b;
					printf("\nO produto de %0.2f e %0.2f é:%0.2f",a,b,x);
					break;
					case 4:
						printf("\n4- Divisão entre 2 números (o denominador não pode ser zero).\n\nDigite dois números:\n");
						scanf("%f %f", &a, &b);
						if(a>=b || b>=a && a!=0 && b!=0){
							x=a/b;
							printf("\nA divisão de %0.2f e %0.2f é:%0.2f\n",a,b,x);
						}else{
							printf("\nNúmero inválido.\n");
						}break;
						default:{
						printf("\nERRO\n");
						}
	}
	return 0;
}
