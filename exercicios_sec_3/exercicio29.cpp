#include<stdio.h>
#include<locale.h>

//Leia quatro notas, calcule a média aritmética e imprima o resultado.

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float a,b,c,d,m;
	
	
	printf("Digite a 1° nota:");
	scanf("%f", & a);
	printf("\nDigite a 2° nota:");
	scanf("%f", & b);
	printf("\nDigite a 3° nota:");
	scanf("%f", & c);
	printf("\nDigite a 4° nota:");
	scanf("%f", & d);
	m=(a+b+c+d)/4;
	getchar();
	printf("\nA média aritimética das notas é: %0.2f\n",m);
	//system("pause");
	return 0;
}
