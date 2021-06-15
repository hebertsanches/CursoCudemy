/*Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/


#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int n,soma=0, i;
	
		
	for(i=0;i<10;i++){
		printf("Digite DEZ números:\n");
	scanf("%d",&n);
	soma=soma+n;
	}
	printf("A soma é %d", soma);
	return 0;
}
