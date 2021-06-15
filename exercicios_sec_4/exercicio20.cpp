/*Dados tr�s valores, A, B, C, verificar se eles podem ser valores dos lados de um tri�ngulo e,
se forem, se � um tri�ngulo escaleno, equil�tero ou is�scele, considerando os seguin-
tes conceitos:

* O comprimento de cada lado de um tri�ngulo � menor do que a soma dos outros
dois lados.

* Chama-se equil�tero o tri�ngulo que tem tr�s lados iguais.

* Denominam-se is�sceles o tri�ngulo que tem o comprimento de dois lados iguais.

* Recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes.*/

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
		printf("\nO comprimento de cada lado de um tri�ngulo deve ser menor do que a soma dos outros dois lados.");
	}else if(a==b && a==c && b==c){
		printf("\nTriangulo EQUIL�TERO.\n");
	}else if(a==b || b==c || c==a){
		printf("\nTri�ngulo IS�CELES.\n");
	}else if(a!=b && a!=c && b!=c){
		printf("\nTri�ngulo ESCALENO.\n");
	}
	
	return 0;
}
