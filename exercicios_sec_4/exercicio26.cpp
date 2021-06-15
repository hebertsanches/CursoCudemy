/*26. Leia a dist�ncia em Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:

CONSUMO   |(Km/l)|    MENSAGEM    |
menor que |   8  |Venda o carro!  |
entre     |8 e 12|Econ�mico!      |
maior que |  12  |Super econ�mico!|*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float km,l,kml;
	printf("\nDigite a dist�ncia percorrida em kilometros:\n");
	scanf("%f", &km);
	printf("\Digite o consumo de combustivel em litros:\n");
	scanf("%f", &l);
	if(km>0 && l>0){
		kml=km/l;
		if(kml<8){
			printf("\nVenda o carro.%0.2fKm/l",kml);
		}else if(kml>=8 && kml<=12){
			printf("Econ�mico.%0.2fKm/l",kml);
		}else if(kml>12){
			printf("\nSuper econ�mico.%0.2fKm/l",kml);
		}
	}else{
		printf("\nDigite um valor valido.");
	}
	return 0;
}
