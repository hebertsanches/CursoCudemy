/*Fa�a um programa que mostre ao usu�rio um menu com 4 op��es de opera��es ma-
tem�ticas (as b�sicas, por exemplo). O usu�rio escolhe uma das op��es e o seu pro-
grama ent�o pede dois valores num�ricos e realiza a opera��o, mostrando o resultado e
saindo.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int var;
	float a,b,c;
	printf("Escolha quais das seguintes opera��es deseja fazer:\n 1-SOMA.\n 2-SUBTRA��O.\n 3-MULTIPLICA��O.\n 4-DIVIS�O.\n");
	scanf("%d", & var);
	switch(var){
		case 1:
			printf("\nDigite dois valores para realizar a soma:\n");
			scanf("%f %f", &a, &b);
			c=a+b;
			printf("\nA soma de %0.2f + %0.2f �:%0.2f\n",a,b,c);
			break;
			case 2:
				printf("\nDigite dois valores para realizar a subtra��o:\n");
				scanf("%f %f", &a,&b);
				c=a-b;
				printf("\nA subtra��o de %0.2f e %0.2f �:%0.2f\n",a,b,c);
				break;
				case 3:
					printf("\nDigite dois valores para realizar a multiplica��o:\n");
					scanf("%f %f", &a, &b);
					c=a*b;
					printf("\nA multiplica��o de %0.2f e %0.2f �:%0.2f",a,b,c);
					break;
					case 4:
						printf("\nDigite dois valores para realizar a divis�o:\n");
						scanf("%f %f", &a,&b);
						c=a/b;
						printf("\nA divis�o de %0.2f e %0.2f �: %0.2f",a,b,c);
						break;
						default:
							printf("\Valor inv�lido");
	}
	return 0;
}
