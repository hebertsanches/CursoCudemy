#include<stdio.h>
#include<locale.h>
#include<math.h>

//Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a
//presta��o for maior que 20% do sal�rio imprima: Empr�stimo n�o concedido, caso
//Contr�rio imprima: Empr�stimo concedido.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float x,sal,pre;
	printf("Digite seu sl�rio:\nR$");
	scanf("%f", &sal);
	printf("\nDigite o valor da presta��o do empr�stimo:\nR$");
	scanf("%f", &pre);
	x=0.2*sal;
	if(pre>x){//ou if(pre>sal.0.2)
		printf("\nEmpr�stimo n�o concedido.\n");
	}else{
		printf("\nEmpr�stimo concedido.\n");
	}
	getchar();
	return 0;
}
