/*6. Fa�a um programa que leia 10 inteiros e imprima sua m�dia.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,n,soma=0,media;
	
	printf("Digite DEZ n�meros:\n");
	for(i>0;i<10;i++){
	scanf("%d", &n);
	soma=soma+n;
	
}
	media=soma/i;
	printf("M�dia = %d",media);
	
	return 0;
}
