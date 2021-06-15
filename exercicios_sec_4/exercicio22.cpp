/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são:
* Ter pelo menos 65 anos,
* Ou ter trabalhado pelo menos 30 anos,
* Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float i,t;
	printf("Digite sua idade:\n");
	scanf("%f",&i);
	if(i>=65){
		printf("\nVocê tem direito a aposentadoria por idade: %0.2f anos.\n",i);
	}else if(i>=14 && i<65){
	printf("\nDigite o tempo de serviço(anos):\n");
	scanf("%f", &t);
	if(t>=30){
		printf("\nVocê tem direito a aposentadoria por ter trabalhado %0.2f anos\n",t);
	}else if(i>=60 && t>=25){
		printf("\nVocê tem direito a aposentadoria por ter %0.2f anos e ter trabalhado %0.2f anos",i,t);
	}else{
		printf("\nVocê não tem direito a aposentadoria.");
	}
	}
	return 0;
}
