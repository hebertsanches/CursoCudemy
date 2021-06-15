/*6. Faça um programa que leia 10 inteiros e imprima sua média.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,n,soma=0,media;
	
	printf("Digite DEZ números:\n");
	for(i>0;i<10;i++){
	scanf("%d", &n);
	soma=soma+n;
	
}
	media=soma/i;
	printf("Média = %d",media);
	
	return 0;
}
