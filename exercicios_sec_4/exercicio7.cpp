#include<stdio.h>
#include<locale.h>

//Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
//números forem iguais, imprima a mensagem Números iguais.
//PS. Fiz com numeros reais pois é o mesmo exercicio que o anterior
int main(){
	setlocale(LC_ALL,"portuguese");
	
	float n1,n2,r;
	printf("Digite dois números inteiros.");
	scanf("%f %f", &n1, & n2);
	if(n1>n2){
		r=n1-n2;
		printf("\n%f é maior que %f e a diferença entre eles é de:%f",n1,n2,r);
	}else if(n1<n2){
		r=n2-n1;
		printf("\n%f é maior que %f e a diferença entre eles é de:%f",n2,n1,r);
	}else if(n1=n2){
		printf("\nOs números são iguais.");
	}
	
	return 0;
}
