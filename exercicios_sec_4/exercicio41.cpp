/*41. Fa�a um algoritmo que calcule o IMC de uma pessoa e mostre sua classifica��o de
acordo com a tabela abaixo:
|   IMC     | CLASSIFICA��O              |
|  <18,5    | Abaixo do Peso             |  
| 18,6-24,9 | Saud�vel                   |
| 25,0-29,9 | Peso em Excesso            |
| 30,0-34,9 | Obesidade Grau I           |
| 35,0-39,9 | Obesidade Grau II(severa)  |
| >=40,0    | Obesidade Grau III(m�rbida)|
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float p,h,imc;
	
	printf("Digite seu PESO:\n");
	scanf("%f", &p);
	printf("Digite sua ALTURA. Ex. 1,56:\n");
	scanf("%f", &h);
	imc=p/(h*h);
	if(imc>0 && imc<=18.5){
		printf("Abaixo do Peso.\nIMC:%0.2f\n",imc);
	}else if(imc>=18.6 && imc<=24.9){
		printf("Saud�vel.\nIMC:%0.2f\n",imc);
	}else if(imc>=25 && imc<=29.9){
		printf("Peso em Excesso.\nIMC:%0.2f\n",imc);
	}else if(imc>=30 && imc<=34.9){
		printf("Obesidade Grau I.\nIMC:%0.2f\n",imc);
	}else if(imc>=35 && imc<=39.9){
		printf("Obesidade Grau II(severa).\nIMC:%0.2f\n",imc);
	}else if(imc>=40){
		printf("Obesidade Grau III(m�rbida).\nIMC:%0.2f\n",imc);
	}
	return 0;
}
