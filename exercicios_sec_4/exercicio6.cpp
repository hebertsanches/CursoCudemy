#include<stdio.h>
#include<locale.h>

//Escreva um programa que, dados dois n�meros inteiros, mostre na tela o maior deles,
//assim como a diferen�a existente entre ambos.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n1,n2,r;
	printf("Digite dois n�meros inteiros.");
	scanf("%d %d", &n1, & n2);
	if(n1>n2){
		r=n1-n2;
		printf("\n%d � maior que %d e a diferen�a entre eles � de:%d",n1,n2,r);
	}else if(n1<n2){
		r=n2-n1;
		printf("\n%d � maior que %d e a diferen�a entre eles � de:%d",n2,n1,r);
	}
	
	return 0;
}
