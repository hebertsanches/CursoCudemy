/*37. As tarifas de certo parque de estacionamento s�o as seguintes:
* 1� e 2� hora- R$1,00 cada

* 3� e 4� hora - R$1,40 cada

* 5� hora e seguintes - R$ 2,00 cada

O n�mero de horas a pagar � sempre inteiro e arredondado por excesso. Deste modo,
quem estacionar durante 61 minutos pagar� por duas horas, que � o mesmo que pagaria
se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida
deste s�o apresentados na forma de pares de inteiros, representando horas e minutos.
Por exemplo, o par 12 50 representar� �dez para a uma da tarde�. Pretende-se criar um
programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela
o pre�o cobrado pelo estacionamento. Admite-se que a chegada e a partida se d�o com
intervalo n�o superior a 24 horas. Portanto, se uma dada hora de chegada for superior
� da partida, isso n�o � uma situa��o de erro, antes significar� que a partida ocorreu no
dia seguinte ao da chegada.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float valor;
	int c1,c2,s1,s2,v,chegadah,saidah,tempo,tempoh,tempom;
	printf("\nDigite a hora de chegada no formato HH:MM:\n");
	scanf("%d:%d",&c1,&c2);
	printf("\nDigite a hora de sa�da no formato HH:MM:\n");
	scanf("%d:%d", &s1,&s2);
	if(c1>=0 && c1<24 && c2>=0 && c2<60 && s1>=0 && s1<24 && s2>=0 && s2<60){
		chegadah=(c1*60)+c2;
		saidah=(s1*60)+s2;
		if(saidah<chegadah){
			saidah=saidah+24*60;
			tempo=saidah-chegadah;
			tempoh=tempo/60;
			tempom=tempo%60;
		}else if(saidah>chegadah){
			tempo=saidah-chegadah;
			tempoh=tempo/60;
			tempom=tempo%60;
			
		}if(tempo<=60){
			tempoh=tempo/60;
			tempom=tempo%60;
			printf("Tempo Estacionado: %0.2d:%0.2d.\nValor a ser pago:R$1,00",tempoh,tempom);
		}else if(tempo>60 && tempo <=120){
			tempoh=tempo/60;
			tempom=tempo%60;
			printf("Tempo Estacionado: %0.2d:%0.2d.\nValor a ser pago:R$2,00",tempoh,tempom);
		}
		if(tempo>120 && tempo <=240){
			tempoh=tempo/60;
			tempom=tempo%60;
			if(tempom>0){
				valor=((tempoh-1)*1.40)+2;
				printf("Tempo Estacionado: %0.2d:%0.2d.\nValor a ser pago:R$%0.2f",tempoh,tempom,valor);
			}else{
				valor=((tempoh-2)*1.4)+2;
				printf("Tempo Estacionado: %0.2d:%0.2d.\nValor a ser pago:R$%0.2f",tempoh,tempom,valor);
			}
		}else if(tempo>240){
			tempoh=tempo/60;
			tempom=tempo%60;
			if(tempom>0){
				valor=(((tempoh-3)*2)+4.8);
				printf("Tempo Estacionado: %0.2d:%0.2d.\nValor a ser pago:R$%0.2f",tempoh,tempom,valor);
			}else{
				valor=(((tempoh-4)*2)+4.8);
				printf("Tempo Estacionado: %0.2d:%0.2d.\nValor a ser pago:R$%0.2f",tempoh,tempom,valor);
			}
		}
		
	
	}else{
		printf("\nERRO\nO HOR�RIO DEVE ESTAR ENTRE 00:00 E 23:59");
	}
	return 0;
	}
	
