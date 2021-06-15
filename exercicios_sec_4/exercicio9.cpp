#include<stdio.h>
#include<locale.h>
#include<math.h>

//Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
//prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso
//Contrário imprima: Empréstimo concedido.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float x,sal,pre;
	printf("Digite seu slário:\nR$");
	scanf("%f", &sal);
	printf("\nDigite o valor da prestação do empréstimo:\nR$");
	scanf("%f", &pre);
	x=0.2*sal;
	if(pre>x){//ou if(pre>sal.0.2)
		printf("\nEmpréstimo não concedido.\n");
	}else{
		printf("\nEmpréstimo concedido.\n");
	}
	getchar();
	return 0;
}
