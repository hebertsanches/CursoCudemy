#include<stdio.h>
#include<locale.h>

//Fa�a um programa que receba dois n�meros e mostre o maior. Se por acaso, os dois
//n�meros forem iguais, imprima a mensagem N�meros iguais.
//PS. Fiz com numeros reais pois � o mesmo exercicio que o anterior
int main(){
	setlocale(LC_ALL,"portuguese");
	
	float n1,n2,r;
	printf("Digite dois n�meros inteiros.");
	scanf("%f %f", &n1, & n2);
	if(n1>n2){
		r=n1-n2;
		printf("\n%f � maior que %f e a diferen�a entre eles � de:%f",n1,n2,r);
	}else if(n1<n2){
		r=n2-n1;
		printf("\n%f � maior que %f e a diferen�a entre eles � de:%f",n2,n1,r);
	}else if(n1=n2){
		printf("\nOs n�meros s�o iguais.");
	}
	
	return 0;
}
