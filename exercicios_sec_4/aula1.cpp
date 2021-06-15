#include<stdio.h>
#include<locale.h>
//estrutura de decisao
int main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	printf("Didigite sua idade:");
	scanf("%d", & idade);
	if(idade<18){//se idade for menor que 18 exiba o printf abaixo
		printf("\nVocê é Menor de idade\n");
	}else if(idade>18 && idade <60){
		printf("\nVocê é adulto\n");
	}else{
		printf("\nVocê é idoso.\n");
	}
	printf("\nSua idade é:%d\n", idade);
	
	return 0;
}
