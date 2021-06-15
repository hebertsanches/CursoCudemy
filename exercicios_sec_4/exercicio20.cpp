/*Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e,
se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguin-
tes conceitos:

* O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.

* Chama-se equilátero o triângulo que tem três lados iguais.

* Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.

* Recebe o nome de escaleno o triângulo que tem os três lados diferentes.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float a,b,c;
	printf("Digite o valor de A:\n");
	scanf("%f", &a);
	printf("\nDigite o valor de B:\n");
	scanf("%f", &b);
	printf("\nDigite o valor de C:\n");
	scanf("%f",&c);
	if(a>b+c || b>a+c || c>b+a){
		printf("\nO comprimento de cada lado de um triângulo deve ser menor do que a soma dos outros dois lados.");
	}else if(a==b && a==c && b==c){
		printf("\nTriangulo EQUILÁTERO.\n");
	}else if(a==b || b==c || c==a){
		printf("\nTriângulo ISÓCELES.\n");
	}else if(a!=b && a!=c && b!=c){
		printf("\nTriângulo ESCALENO.\n");
	}
	
	return 0;
}
