/*23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se
for divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo:
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
