/*31. Fa�aum programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, ver�fique e mostra qual a classifica��o dessa pessoa.

Altura	      |           	   Peso			    	|             |
	          | At� 60 | Entre 60 e 90(inclusive)   | Acima de 90 |\n
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
		printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posi��o na tabela �: A.\n",h,p);
	}else if(h<=1.70 && p<60){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posi��o na tabela �: B.\n",h,p);
	}else if(h>1.70 && p<60){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posi��o na tabela �: C.\n",h,p);
	}else if(h<1.20 && p>=60 && p<=90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posi��o na tabela �: D.\n",h,p);
	}else if(h<=1.70 && p>=60 && p<=90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posi��o na tabela �: E.\n",h,p);
	}else if(h>1.70 && p>=60 && p<=90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posi��o na tabela �: F.\n",h,p);
	}else if(h<1.20 && p>90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posi��o na tabela �: G.\n",h,p);
	}else if(h<=1.70 && p>90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posi��o na tabela �: H.\n",h,p);
	}else if(h>1.70 && p>90){
	printf("\n%0.2f metros.\n%0.2f Kilos.\nSua posi��o na tabela �: I.\n",h,p);
	}
	
	
	return 0;
}
