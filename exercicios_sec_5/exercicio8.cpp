/*8. Escreva um programa que leia 10 n�meros e escreva o menor valor lido e o maior valor
lido.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n,maior=0,menor=0,i;
	
		printf("Digite DEZ n�meros\n");
		for(i>0;i<10;i++){
		scanf("%d",&n);
		if(n>maior){
			maior=n;
		}else if(n<menor){
			menor=n;	
		}
		}
		printf("Maior N�mero: %d\n",maior);
		printf("Menor N�mero: %d\n",menor);
	
	return 0;
}
