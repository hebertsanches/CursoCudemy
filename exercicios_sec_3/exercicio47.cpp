#include<stdio.h>
#include<locale.h>
#include<iostream>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num,mi,ce,de,un;
	printf("Digite um número entre 1000 e 9999.\n");
	scanf("%d", & num);
	mi=num/1000;//por ex 1234/1000=1.234 como é INT considera só o 1
	ce=(num/100)-(10*mi);//1234/100=12 e 10*mi=10 logo 12-10=2
	de=(num/10)-(100*mi)-(10*ce);//1234/10=123 e 100*1 e 10*2 logo 123-100-20=3
	un=(num/1)-(1000*mi)-(100*ce)-(10*de);//1234/1 e 1000*1 e 100*2 e 10*3 = 1234-1000-200-30=4
	if (num>=1000 && num<=9999){
		printf("\nO numero digitado foi\n%d\n%d\n%d\n%d\n",mi,ce,de,un);
	
	}
	
	else
	{
		printf("\nNúmero digitado não aceito. Por favor digite um número entre 1000 e 9999\n");	
	}
		
	getchar();
	system("pause");
	return 0;
	
}
