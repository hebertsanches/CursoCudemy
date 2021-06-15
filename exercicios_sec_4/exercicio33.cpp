/*33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo,
calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de
acordo com a segunda tabela).

|PREÇO ANTIGO        |  PERCENTUAL DE AUMENTO  |
|Até R$50            |		5%	       |
|Entre R$50 e R$ 100 |		10%	       |
|Acima de R$100      |		15%	       |*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float pa,pn;
	
	printf("Digite o preço antigo:\nR$");
	scanf("%f", &pa);
	if(pa<50){
			pn=(pa*0.05)+pa;
			printf("Preço novo é:\nR$%0.2f\n",pn);
	}else if(pa>=50 && pa<=100){
		pn=(pa*0.10)+pa;
		printf("\nPreço novo é:\nR$%0.2f\n",pn);
	}else if(pa>100){
		pn=(pa*0.15)+pa;
		printf("\nPreço novo é:\nR$%0.2f\n",pn);
	}else{
		printf("\nValor inválido.\n");
	}
	
	return 0;
}
