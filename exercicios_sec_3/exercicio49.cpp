#include<stdio.h>
#include<locale.h>
#include<iostream>
//Fa�a um programa para leia o hor�rio (hora, minuto e segundo) de in�cio e a dura��o, em
//segundos, de uma experi�ncia biol�gica. O programa deve resultar com o novo hor�rio
//(hora, minuto e segundo) do termino da mesma.
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int h,min,seg,ad;
	int H,M,S;
	int NH,NM,NS;
	printf("Digite a hora:");
	scanf("%d", &h);
	printf("Digite o(s) minuto(s):");
	scanf("%d", &min);
	printf("Digite o(s) segundo(s):");
	scanf("%d", &seg);
	printf("\nDigite a dura��o em segundos do experimento:");
	scanf("%d", & ad);
	
	H=ad/3600;
	M=(ad%3600)/60;
	S=(ad%3600)%60;
	
	NH=H+h;
	NM=M+min;
	NS=S+seg;
	
	if(NS>=60){
		NM=NM+1;
		NS=NS-60;
	}
	if(NM>=60){
		NH=NH+1;
		NM=NM-60;
	}
	if(NH>=24){
		NH=NH-24;
	}
	printf("\nO novo hor�rio foi:%d:%d:%d\n",NH,NM,NS);
	getchar();
	system("pause");
	return 0;
	
}
