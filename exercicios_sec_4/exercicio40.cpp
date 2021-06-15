/*40. O custo ao consumidor de um carro novo � a soma do custo de f�brica, da comiss�o
do distribuidor, e dos impostos. A comiss�o e os impostos s�o calculados sobre o custo
de f�brica, de acordo com a tabela abaixo. Leia o custo de f�brica e escreva o custo ao
consumidor.

|CUSTO DE F�BRICA              | % DO DISTRIBUIDOR | % DOS IMPOSTOS|
|At� R$12.000,00               |         5         |     isento    |
|Entre R$12.000,00 � 25.000,00 |         10        |     15        |
|Acima de R$25.000,00          |         15        |     20        |
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int cf,cc,d,i;
	printf("Digite o custo de f�brica:\nR$");
	scanf("%d", &cf);
	if(cf>0 && cf <=12000){
		cc=(cf*0.05)+cf;
		printf("\nO custo do consumidor �: R$%d\n",cc);
	}else if(cf>12000 && cf<=25000){
		cc=(cf*0.10)+(cf*0.15)+cf;
		printf("\nO custo do consumidor �: R$%d\n",cc);
	}else if(cf>25000){
		cc=(cf*0.15)+(cf*0.2)+cf;
		printf("\nO custo do consumidor �: R$%d\n",cc);
	}else{
		printf("\nERRO.\n");
	}
	
	return 0;
}
