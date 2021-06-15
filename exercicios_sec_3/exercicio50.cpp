#include<stdio.h>
#include<iostream>
#include<locale.h>
#include <time.h>

int main( int argc, char * argv[]){

	setlocale(LC_ALL, "portuguese");
	
	int idade,ano_nasc,ano_atual;
	printf("Digite o ano atual:");
	scanf("%d", & ano_atual);
	printf("\nDigite sua idade");
	scanf("%d", & idade);
	ano_nasc=ano_atual-idade;
	printf("\nVoce nasceu no ano:%d", ano_nasc);
	printf("\n O ano de nascimento é:%d\n",ano_nasc);
	
	getchar();
	system("pause");
	return 0;

}
