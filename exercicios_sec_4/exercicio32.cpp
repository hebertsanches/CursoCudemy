/*

32. Escrever um programa que leia o código do produto escolhido do cardápio de uma lan-
chonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um pedido. O cardápio da lan-
chonete segue o padrão abaixo:

| Especificação | Código | Preço|
|Cachorro Quente|  100   | 1.20 |
|Bauru Símples  |  101   | 1.30 |
|Bauru com Ovo  |  102   | 1.50 |
| Hamburguer    |  103   | 1.20 |
|cheeseburguer  |  104   | 1.70 |
[      Suco     |  105   | 2.20 |
[Refigerante    |  106   | 1.00 |*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int qt,cod;
	float ped,vt;
	printf("\nDigite o(s) código(s) do(s) produto(s):\n");
	printf("\n100 - Cachorro Quente:R$1.20\n");
	printf("\n101 - Bauru Símples:R$1.30\n");
	printf("\n102 - Bauru com Ovo:R$1.50\n");
	printf("\n103 - Hamburguer:R$1.20\n");
	printf("\n104 - Cheeseburguer:R$1.70\n");
	printf("\n105 - Suco:R$2.20\n");
	printf("\n106 - Refigerante:R$1.00\n");

	scanf("%d", & cod);
	switch(cod){
		case 100:
			ped=1.20;
			break;
			case 101:
				ped=1.30;
				break;
				case 102:
				ped=1.50;
				break;
				case 103:
					ped=1.20;
					break;
					case 104:
						ped=1.70;
						break;
						case 105:
							ped=2.20;
							break;
							case 106:
								ped=1.00;
								break;	
								default:
								printf("\nERRO.\n");						
	}
	
	printf("\nQuantidade:\n");
	scanf("%d", &qt);
	vt=qt*ped;
	printf("\nValor Total:R$%0.2f\n",vt);
	/*printf("\nDeseja adicionar item?\n");
	printf("\nDigite:/n 1 - SIM.\n2 - NÃO.\n");*/

	
	
	return 0;
}
