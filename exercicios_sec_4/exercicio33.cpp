/*33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o pre�o antigo,
calcule e escreva o pre�o novo, e escreva uma mensagem em fun��o do pre�o novo (de
acordo com a segunda tabela).

|PRE�O ANTIGO        |  PERCENTUAL DE AUMENTO  |
|At� R$50            |		5%	       |
|Entre R$50 e R$ 100 |		10%	       |
|Acima de R$100      |		15%	       |*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float pa,pn;
	
	printf("Digite o pre�o antigo:\nR$");
	scanf("%f", &pa);
	if(pa<50){
			pn=(pa*0.05)+pa;
			printf("Pre�o novo �:\nR$%0.2f\n",pn);
	}else if(pa>=50 && pa<=100){
		pn=(pa*0.10)+pa;
		printf("\nPre�o novo �:\nR$%0.2f\n",pn);
	}else if(pa>100){
		pn=(pa*0.15)+pa;
		printf("\nPre�o novo �:\nR$%0.2f\n",pn);
	}else{
		printf("\nValor inv�lido.\n");
	}
	
	return 0;
}
