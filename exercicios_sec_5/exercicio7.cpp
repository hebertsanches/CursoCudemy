/*7. Fa�a um programa que leia 10 inteiros positivos, ignorando n�o 
positivos, e imprima sua m�dia.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int soma=0,n,media,i;
	
	printf("Digite DEZ n�meros:\n");
	printf("\n");
	for(i=0;i<10;i++){
		scanf("%d", &n);
		if(n>0){//caso n negativo
			soma=soma+n;
		}else{
			i=i-1;
		}
		
	}
	media=soma/i;
	printf("\nM�dia = %d",media);
	return 0;
}
