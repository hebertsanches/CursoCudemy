/*Fa�a um programa que pe�a ao usu�rio para digitar 10 valores e some-os.*/


#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int n,soma=0, i;
	
		
	for(i=0;i<10;i++){
		printf("Digite DEZ n�meros:\n");
	scanf("%d",&n);
	soma=soma+n;
	}
	printf("A soma � %d", soma);
	return 0;
}
