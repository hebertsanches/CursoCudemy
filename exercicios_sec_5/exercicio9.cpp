/*9. Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros
n�meros naturais �mpares.*/

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int n,imp=0,repeticao;
	
	printf("Digite um n�mero:\n");
	scanf("%d",&n);
	repeticao=n;
	if(n!=0){//para Zero n ser considerado par
		if(n%2!=0){
			printf("\n\n%d � IMPAR, e os pr�ximos %d n�meros impares s�o:\n",repeticao,repeticao);
			while(imp<repeticao){
				n=n+2;
				printf("%d\n",n);
				imp++;//para a execu�ao ao chegar em N repeticoes
			}
				
				
				
		}else{
				printf("\n\n%d � PAR, e os pr�ximos %d n�meros pares s�o:\n",repeticao,repeticao);
				while(imp<repeticao){
				
				n=n+2;
				printf("%d\n",n);
				imp++;
			}
			}
	}
	
	return 0;
}
