/*39. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela
que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários
com menor salário terão um aumento proporcionalmente maior do que os funcionários
com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá
receber um bônus adicional de salário. Faça um programa que leia:

* o valor do salário atual do funcionário;
* o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
empresa).

Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o
valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito
a nenhum aumento.
|Salário Atual   |Reajuste(%) | Tempode Serviço |   Bônus |
|Até 500,00      |    25%     | Abaixo de 1 ano |Sem Bônus|
|Até 1000,00     |    20%     |  De 1 a 3 anos  | 100,00  |
|Até 1500,00     |    15%     |  De 4 a 6 anos  | 200,00  |
|Até 2000,00     |    10%     |  De 7 a 10 anos | 300,00  |
|Acima de 2000,00|Sem reajuste| Mais de 10 anos | 500,00  |*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int s,t,b;
	

		printf("Digite o Salário:\n");
		scanf("%d", &s);
		printf("Digite o Tempo de serviço em anos:\n");
		scanf("%d", &t);
		if(s>=0 && s<=500){
			s=(s*0.25)+s;
			printf("Novo salário é: %d\n",s);
		}else if(s>500 && s<=1000){
			s=(s*0.20)+s;
			printf("Novo salário é: %d\n",s);
		}else if(s>1000 && s<=1500){
			s=(s*0.15)+s;
			printf("Novo salário é: %d\n",s);
		}else if(s>1500 && s<=2000){
			s=(s*0.10)+s;
			printf("Novo Salário é: %d\n",s);
		}else if(s>2000){
			printf("Não tem direito a aumento.\n");
		}
		switch(t){
			case 0:
				b=0;
				printf("Não tem direito ao bônus.\n");
			break;
			case 1:
			case 2:
			case 3:
				b=100;
				printf("Bônus = %d\n",b);
			break;
			case 4:
			case 5:
			case 6:
				b=200;
				printf("Bônus = %d\n",b);
			break;
			case 7:
			case 8:
			case 9:
			case 10:
				b=300;
				printf("Bônus = %d\n",b);
		    break;
		    
		}
		if(t>10){
		    	b=500;
		    	printf("Bônus = %d\n",b);
			}
	
	
	
	return 0;
}
