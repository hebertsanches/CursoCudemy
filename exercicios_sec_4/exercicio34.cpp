/*34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a
tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.



|  NOTA      |CONCEITO(ATÉ 20 FALTAS)|CONCEITO(MAIS DE 20 FALTAS)|
|9.0 até 10.0|           A           |           B           |
|7.5 até 8.9 |           B           |           C           |
|5.0 até 7.4 |           C           |           D           |
|4.0 até 4.9 |           D           |           E           |
|0.0 até 3.9 |           E           |           E           |*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float n;
	int f;
	
	printf("\nDigite a NOTA do aluno:\n");
	scanf("%f", &n);
	printf("\nDigite as FALTAS do aluno:\n");
	scanf("%d", &f);
	if(n>=9.0 && n<=10.0 && f<=20){
		printf("\nCONCEITO:A\n");
	}else if(n>=9.0 && n<=10.0 && f>20){
		printf("\nCONCEITO:B\n");
	}else if(n>=7.5 && n<=8.9 && f<=20){
		printf("\nCONCEITO:B\n");
	}else if(n>=7.5 && n<=8.9 && f>20){
		printf("\nCONCEITO:C\n");
	}else if(n>=5.0 && n<=7.5 && f<=20){
		printf("\nCONCEITO:C\n");
	}else if(n>=5.0 && n<7.5 && f>20){
		printf("\nCONCEITO:D\n");
	}else if(n>=4.0 && n<=5.0 && f<=20){
		printf("\nCONCEITO:D\n");
	}else if(n>=4.0 && n<5.0 && f>20){
		printf("\nCONCEITO:E\n");
	}else if(n>=0.0 && n<4.0){
		printf("\nCONCEITO:E\n");	
	}
	
	return 0;
}
