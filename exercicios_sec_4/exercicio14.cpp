/*A nota final de um estudante � calculada a partir de tr�s notas atribu�das entre o intervalo
de O at� 10, respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral
e a um exame final. A m�dia das tr�s notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno est� reprovado (m�dia entre 0 e 2,9), de
recupera��o (entre 3 e 4,9) ou se foi aprovado. Fa�a todas as verifica��es necess�rias.*/

#include<stdio.h>
#include<locale.h>
#include<iostream>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float x,n1,n2,n3;
	printf("Trabalho de Laborat�rio:0 a 2\nAvalia��o Semestral:0 a 3\nExame Final:0 a 5\n\nReprovado (entre 0 e 2,9)\nRecupera��o (entre 3 e 4,9)\nAprovado.\n");
	printf("Digite a nota do trabalho de laborat�rio MAX:2:\n");
	scanf("%f", &n1);
	if(n1>=0 && n1<=2){
			printf("Digite a nota do trabalho da avalia��o semestral MAX:3:\n");
			scanf("%f", &n2);
			
			if(n2>=0 && n2<=3){
				printf("\nDigite a nota do exame final MAX 5:\n");
				scanf("%f", &n3);
				
				if(n3>=0 && n3<=5){
					x=n1+n2+n3;
					if(x>=5){
						
						printf("\nAprovado, nota %0.1f.\n",x);
						}
					if(x>=3 && x<5){

						printf("\nRecupera��o, nota %0.1f.\n",x);
						}
						else{
						x<3;
						printf("\nReprovado, nota %0.1f.\n",x);
						}
					}else{
						printf("\nNota invalida.\n");
					}
				}else{
					printf("\nNota invalida.\n");
				}
			}else{
		printf("\nNota invalida.\n");
	}
	system ("pause");
	return 0;
	}
	
	

