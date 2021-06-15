#include<stdio.h>
#include<locale.h>
#include<iostream>
//leia um numero inteiro em segundos e imprima-o em horas, minutos e segundos.
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int temp,h,min,seg,sobra;
	printf("Digite a quantidade de tempo em segundos:");
	scanf("%d", & temp);
	h=temp/3600;
	sobra=temp%3600;
	min=sobra/60;
	seg=sobra%60;
	
	printf("\n O tempo é em:%d:%d:%d\n", h,min,seg);
	
	getchar();
	system("pause");
	return 0;
}
