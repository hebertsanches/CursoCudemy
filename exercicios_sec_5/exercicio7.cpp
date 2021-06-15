/*7. Faça um programa que leia 10 inteiros positivos, ignorando não 
positivos, e imprima sua média.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int soma=0,n,media,i;
	
	printf("Digite DEZ números:\n");
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
	printf("\nMédia = %d",media);
	return 0;
}
