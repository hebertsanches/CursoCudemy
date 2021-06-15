/*27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
Categoria | Idade
Infanti A | 5 a 7
Infanti B | 8 a 10
Juvenil A | 11 a 13
Juvenil B | 14 a 17
Sênior    | Maiores de 18 anos*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int id;
	printf("Digite a idade do(a) nadador(a):");
	scanf("%d", &id);
	if(id>=5 && id<=7){
		printf("Infantil A");
	}else if(id>=8 && id<=10){
		printf("Infantil B");
	}else if(id>=11 && id<=13){
		printf("Juvenil A");
	}else if(id>=14 && id<=17){
		printf("Juvenil B");
	}else if(id>=18 && id<120){
		printf("Sênior.");
	}else{
		printf("ERRO.");
	}
	
	return 0;
}
