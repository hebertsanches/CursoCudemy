#include<stdio.h>
#include<locale.h>

//Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou
//�mpar.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n1, r;
	printf("Digite um n�mero:\n");
	scanf("%d", &n1);
	r=n1%2;
	if(r==0){
		printf("\nN�mero digitado � par.");
	}else{
		printf("\nN�mero digitado � �mpar.");
	}
	
	return 0;
}
