/*8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
lido.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n,maior=0,menor=0,i;
	
		printf("Digite DEZ números\n");
		for(i>0;i<10;i++){
		scanf("%d",&n);
		if(n>maior){
			maior=n;
		}else if(n<menor){
			menor=n;	
		}
		}
		printf("Maior Número: %d\n",maior);
		printf("Menor Número: %d\n",menor);
	
	return 0;
}
