#include<stdio.h>
#include<locale.h>
//Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1,n2;
	printf("Digite dois n�meros:");
	scanf("%f %f", &n1, &n2);
	if(n1>n2){
		printf("\n%0.2f � maior que %0.2f. O primeiro n�mero digitado � maior que o segundo.",n1,n2);
	}else if(n1<n2){
		printf("\n%0.2f � maior que %0.2f.O segundo n�mero digitado � maior que o primeiro. ",n2,n1);
	}else{
		printf("\nOs n�meros s�o iguais.\n");
	}
	getchar();
	return 0;
}
