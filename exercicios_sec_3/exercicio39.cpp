//A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso.
//Sendo que da quantia total:
//* O primeiro ganhador receber� 46%;
//* O segundo receber� 32%;
//* Oterceiro receber� o restante;
//Calcule e imprima a quantia ganha por cada um dos ganhadores.

#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
int main(void){
	const int i = 780.000;//define constante
	setlocale(LC_ALL, "portuguese");
	
	float g1,g2,g3;
	g1=i*0.46;
	g2=i*0.32;
	g3=i-g1-g2;
	printf("O ganhador 1 receber�:%0.3f", g1);
	printf("\nO ganhador 2 receber�:%0.3f", g2);
	printf("\nO ganhador 3 receber�:%0.3f", g3);
	getchar();
	system ("pause");
	return 0;
	
}
