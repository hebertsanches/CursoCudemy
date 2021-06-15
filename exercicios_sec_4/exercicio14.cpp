/*A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de O até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. A média das três notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.*/

#include<stdio.h>
#include<locale.h>
#include<iostream>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float x,n1,n2,n3;
	printf("Trabalho de Laboratório:0 a 2\nAvaliação Semestral:0 a 3\nExame Final:0 a 5\n\nReprovado (entre 0 e 2,9)\nRecuperação (entre 3 e 4,9)\nAprovado.\n");
	printf("Digite a nota do trabalho de laboratório MAX:2:\n");
	scanf("%f", &n1);
	if(n1>=0 && n1<=2){
			printf("Digite a nota do trabalho da avaliação semestral MAX:3:\n");
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

						printf("\nRecuperação, nota %0.1f.\n",x);
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
	
	

