#include<stdio.h>
#include<locale.h>
//estrutura de decisao
int main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	printf("Didigite sua idade:");
	scanf("%d", & idade);
	if(idade<18){//se idade for menor que 18 exiba o printf abaixo
		printf("\nVoc� � Menor de idade\n");
	}else if(idade>18 && idade <60){
		printf("\nVoc� � adulto\n");
	}else{
		printf("\nVoc� � idoso.\n");
	}
	printf("\nSua idade �:%d\n", idade);
	
	return 0;
}
