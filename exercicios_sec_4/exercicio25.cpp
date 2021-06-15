/*Calcule as raízes da equação de 2º grau.

Lembrando que:
 
X=(-b+-raizdedelta)/2a

Onde

Delta=B²-4ac

E ax² + bx + c = 0 Representa uma equação de 2º grau.

*A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não
é equação de segundo grau”.

*Se Delta < 0, não existe real. Imprima a mensagem Não existe raiz.

* Se Delta = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz única.

*Se Delta >= 0, imprima as duas raízes reais.*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float a,b,c,d,x,x1,x2,sqrtd;
	printf("Equação de 2º grau: ax² + bx + c = 0\nDigite o valor de a:\n");
	scanf("%f", &a);
	if(a!=0){
		printf("\nDigite o valor de b:\n");
		scanf("%f", & b);
		printf("\nDigite o valor de c:\n");
		scanf("%f", &c);
		d=b*b-(4*a*c);
		sqrtd = sqrt(d);
		if(d<0){
			printf("\nNão existe raiz: Delta<0\n");
		}else if(d=0){
			x=-b/(2*a);
			printf("\nRaiz única %0.2f",x);
		}else if(d>=0){
			x1=(-b+sqrtd)/(2*a);
			x2=(-b-sqrtd)/(2*a);
			printf("\nRaiz 1 = %0.2f",x1);
			printf("\nRaiz 2 = %0.2f",x2);
		}
	}else{
		printf("\nNão é equação de segundo grau");
	}
	
	
	return 0;
}
