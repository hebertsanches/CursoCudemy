/*10. Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,n,repeticao=100, soma=0;
	while(n<repeticao){
		n++;
		printf("%d\n",n);
		n++;
		
	}for(i=1;i<=100;i++){
		if(i%2==0)
		soma+=i;
		
	}
	printf("A soma dos 50 primeiros n�meros PARES �: %d\n",soma);

	
	return 0;
}

