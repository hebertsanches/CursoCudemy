/*36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser
paga ao vendedor. Para calcular a comissão, considere a tabela abaixo:

                  Venda mensal                       |        Comissão         |
                                                     |                         |
Maior ou igual a R$100.000,00                        |R$700,00 + 16% das vendas|
Menor que R$100.000,00 e maior ou igual a R$80.000,00|R$650,00 + 14% das vendas|
Menor que R$80.000,00 e maior ou igual a R$60.000,00 |R$600,00 + 14% das vendas|
Menor que R$60.000,00 e maior ou igual a R$40.000,00 |R$550,00 + 14% das vendas|
Menor que R$40.000,00 e maior ou igual a R$20.000,00 |R$500,00 + 14% das vendas|
Menor que R$20.000,00                                |R$400,00 + 14% das vendas|*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float v,c;
	
	printf("\nDigite o valor da venda mensal(Ex.15000):\nR$");
	scanf("%f", &v);
	if(v>0 && v<20000){
		c=(v*0.14)+400;
		printf("\nValor da comissão:%0.2f\n",c);
	}else if(v>=20000 && v<40000){
		c=(v*0.14)+500;
		printf("\nValor da comissão:%0.2f\n",c);
	}else if(v>=40000 && v<60000){
		c=(v*0.14)+550;
		printf("\nValor da comissão:%0.2f\n",c);
	}else if(v>=60000 && v<80000){
		c=(v*0.14)+600;
		printf("\nValor da comissão:%0.2f\n",c);
	}else if(v>=80000 && v<100000){
		c=(v*0.14)+650;
		printf("\nValor da comissão:%0.2f\n",c);
	}else if(v>=100000){
		c=(v*0.14)+700;
		printf("\nValor da comissão:%0.2f\n",c);
	}else{
		printf("\nVALOR INVÁLIDO.\n");
	}
	
	
	
	return 0;
}
