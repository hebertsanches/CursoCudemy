/*9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ímpares.*/

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int n,imp=0,repeticao;
	
	printf("Digite um número:\n");
	scanf("%d",&n);
	repeticao=n;
	if(n!=0){//para Zero n ser considerado par
		if(n%2!=0){
			printf("\n\n%d é IMPAR, e os próximos %d números impares são:\n",repeticao,repeticao);
			while(imp<repeticao){
				n=n+2;
				printf("%d\n",n);
				imp++;//para a execuçao ao chegar em N repeticoes
			}
				
				
				
		}else{
				printf("\n\n%d é PAR, e os próximos %d números pares são:\n",repeticao,repeticao);
				while(imp<repeticao){
				
				n=n+2;
				printf("%d\n",n);
				imp++;
			}
			}
	}
	
	return 0;
}
