/*31. Façaum programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verífique e mostra qual a classificação dessa pessoa.

Altura	      |           	   Peso			    	|             |
	          | Até 60 | Entre 60 e 90(inclusive)   | Acima de 90 |\n
Menor que 1,20|	   A   | 	       D		 		|	  G       |\n
De 1,20 a 1,70|    B   |	       E	 			|	  H	      |\n
Maior que 1,70|    C   |	       F		 		|	  I	      |\n*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float p,h;
	printf("\nDigite sua altura. ex.:1,25:");
	scanf("%f", &h);
	printf("\nDigite seu peso:\n");
	scanf("%f", &p);
	if(h<1.20 && p<60){
		printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posição na tabela é: A.\n",h,p);
	}else if(h<=1.70 && p<60){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posição na tabela é: B.\n",h,p);
	}else if(h>1.70 && p<60){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posição na tabela é: C.\n",h,p);
	}else if(h<1.20 && p>=60 && p<=90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posição na tabela é: D.\n",h,p);
	}else if(h<=1.70 && p>=60 && p<=90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posição na tabela é: E.\n",h,p);
	}else if(h>1.70 && p>=60 && p<=90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posição na tabela é: F.\n",h,p);
	}else if(h<1.20 && p>90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posição na tabela é: G.\n",h,p);
	}else if(h<=1.70 && p>90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posição na tabela é: H.\n",h,p);
	}else if(h>1.70 && p>90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posição na tabela é: I.\n",h,p);
	}
	
	
	return 0;
}
