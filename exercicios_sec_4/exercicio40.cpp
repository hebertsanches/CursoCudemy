/*40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão
do distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo
de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao
consumidor.

|CUSTO DE FÁBRICA              | % DO DISTRIBUIDOR | % DOS IMPOSTOS|
|Até R$12.000,00               |         5         |     isento    |
|Entre R$12.000,00 é 25.000,00 |         10        |     15        |
|Acima de R$25.000,00          |         15        |     20        |
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int cf,cc,d,i;
	printf("Digite o custo de fábrica:\nR$");
	scanf("%d", &cf);
	if(cf>0 && cf <=12000){
		cc=(cf*0.05)+cf;
		printf("\nO custo do consumidor é: R$%d\n",cc);
	}else if(cf>12000 && cf<=25000){
		cc=(cf*0.10)+(cf*0.15)+cf;
		printf("\nO custo do consumidor é: R$%d\n",cc);
	}else if(cf>25000){
		cc=(cf*0.15)+(cf*0.2)+cf;
		printf("\nO custo do consumidor é: R$%d\n",cc);
	}else{
		printf("\nERRO.\n");
	}
	
	return 0;
}
