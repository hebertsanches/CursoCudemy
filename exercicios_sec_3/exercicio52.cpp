#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
//Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
//porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
//que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
//ganharia do prêmio com base no valor investido.
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float ap1,ap2,ap3,p1,p2,p3,ap_total,r1,r2,r3;
	int premio;
	printf("Digite o valor do pêmio:\nR$");
	scanf("%d", & premio);
	printf("Digite o valor que o amigo 1 apostou:\n");
	scanf("%f", & ap1);
	printf("\nDigite o valor que o amigo 2 apostou:\n");
	scanf("%f", & ap2);
	printf("\nDigite o valor que o amigo 3 apostou:\n");
	scanf("%f", & ap3);
	ap_total=ap1+ap2+ap3;
	p1=ap1/ap_total;
	p2=ap2/ap_total;
	p3=ap3/ap_total;
	
	r1=p1*premio;
	r2=p2*premio;
	r3=p3*premio;
	printf("\nO amigo1 ganhará:\nR$%0.2f",r1);
	printf("\nO amigo2 ganhará:\nR$%0.2f",r2);
	printf("\nO amigo3 ganhará:\nR$%0.2f\n",r3);
	getchar();
	system("pause");
	return 0;
}
