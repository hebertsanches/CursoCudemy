/*23. Determine se um determinado ano lido � bissexto. Sendo que um ano � bissexto se
for divis�vel por 400 ou se for divis�vel por 4 e n�o for divis�vel por 100. Por exemplo:
1988, 1992, 1996.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int a;
	printf("Digite um ano:\n");
	scanf("%d", &a);

	if(a%400==0 || a%4==0 && a%100!=0){
		printf("\n%d Ano bissexto.",a);
	}else {
		printf("\n%d Ano normal.\n",a);
	}
	return 0;
}
