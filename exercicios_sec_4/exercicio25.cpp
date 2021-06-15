/*Calcule as ra�zes da equa��o de 2� grau.

Lembrando que:
 
X=(-b+-raizdedelta)/2a

Onde

Delta=B�-4ac

E ax� + bx + c = 0 Representa uma equa��o de 2� grau.

*A vari�vel a tem que ser diferente de zero. Caso seja igual, imprima a mensagem �N�o
� equa��o de segundo grau�.

*Se Delta < 0, n�o existe real. Imprima a mensagem N�o existe raiz.

* Se Delta = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz �nica.

*Se Delta >= 0, imprima as duas ra�zes reais.*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float a,b,c,d,x,x1,x2,sqrtd;
	printf("Equa��o de 2� grau: ax� + bx + c = 0\nDigite o valor de a:\n");
	scanf("%f", &a);
	if(a!=0){
		printf("\nDigite o valor de b:\n");
		scanf("%f", & b);
		printf("\nDigite o valor de c:\n");
		scanf("%f", &c);
		d=b*b-(4*a*c);
		sqrtd = sqrt(d);
		if(d<0){
			printf("\nN�o existe raiz: Delta<0\n");
		}else if(d=0){
			x=-b/(2*a);
			printf("\nRaiz �nica %0.2f",x);
		}else if(d>=0){
			x1=(-b+sqrtd)/(2*a);
			x2=(-b-sqrtd)/(2*a);
			printf("\nRaiz 1 = %0.2f",x1);
			printf("\nRaiz 2 = %0.2f",x2);
		}
	}else{
		printf("\nN�o � equa��o de segundo grau");
	}
	
	
	return 0;
}
