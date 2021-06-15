/*39. Uma empresa decide dar um aumento aos seus funcion�rios de acordo com uma tabela
que considera o sal�rio atual e o tempo de servi�o de cada funcion�rio. Os funcion�rios
com menor sal�rio ter�o um aumento proporcionalmente maior do que os funcion�rios
com um sal�rio maior, e conforme o tempo de servi�o na empresa, cada funcion�rio ir�
receber um b�nus adicional de sal�rio. Fa�a um programa que leia:

* o valor do sal�rio atual do funcion�rio;
* o tempo de servi�o desse funcion�rio na empresa (n�mero de anos de trabalho na
empresa).

Use as tabelas abaixo para calcular o sal�rio reajustado deste funcion�rio e imprima o
valor do sal�rio final reajustado, ou uma mensagem caso o funcion�rio n�o tenha direito
a nenhum aumento.
|Sal�rio Atual   |Reajuste(%) | Tempode Servi�o |   B�nus |
|At� 500,00      |    25%     | Abaixo de 1 ano |Sem B�nus|
|At� 1000,00     |    20%     |  De 1 a 3 anos  | 100,00  |
|At� 1500,00     |    15%     |  De 4 a 6 anos  | 200,00  |
|At� 2000,00     |    10%     |  De 7 a 10 anos | 300,00  |
|Acima de 2000,00|Sem reajuste| Mais de 10 anos | 500,00  |*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int s,t,b;
	

		printf("Digite o Sal�rio:\n");
		scanf("%d", &s);
		printf("Digite o Tempo de servi�o em anos:\n");
		scanf("%d", &t);
		if(s>=0 && s<=500){
			s=(s*0.25)+s;
			printf("Novo sal�rio �: %d\n",s);
		}else if(s>500 && s<=1000){
			s=(s*0.20)+s;
			printf("Novo sal�rio �: %d\n",s);
		}else if(s>1000 && s<=1500){
			s=(s*0.15)+s;
			printf("Novo sal�rio �: %d\n",s);
		}else if(s>1500 && s<=2000){
			s=(s*0.10)+s;
			printf("Novo Sal�rio �: %d\n",s);
		}else if(s>2000){
			printf("N�o tem direito a aumento.\n");
		}
		switch(t){
			case 0:
				b=0;
				printf("N�o tem direito ao b�nus.\n");
			break;
			case 1:
			case 2:
			case 3:
				b=100;
				printf("B�nus = %d\n",b);
			break;
			case 4:
			case 5:
			case 6:
				b=200;
				printf("B�nus = %d\n",b);
			break;
			case 7:
			case 8:
			case 9:
			case 10:
				b=300;
				printf("B�nus = %d\n",b);
		    break;
		    
		}
		if(t>10){
		    	b=500;
		    	printf("B�nus = %d\n",b);
			}
	
	
	
	return 0;
}
