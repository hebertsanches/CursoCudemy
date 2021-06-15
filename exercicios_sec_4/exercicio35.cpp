/*35. Leia uma data e determine se ela � v�lida. Ou seja, verifique se o m�s est� entre 1 e 12,
e se o dia existe naquele m�s. Note que Fevereiro tem 29 dias em anos bissextos, e 28
dias em anos n�o bissextos.*/

#include<stdio.h>
#include<locale.h>
#include<iostream>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int d,m,a,v;
	
	printf("\nDigite uma data. Por ex.: 12/01/2020\n");
	scanf("%d %d %d",&d,&m,&a);
	if(d>0 && d<=31 && m>=1 && m<=12){
			switch(m){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if(d>0 && d<=31){
						printf("\nData v�lida.\n%d/%d/%d\n",d,m,a);
						break;
					}
					case 2:
					if(a%400==0 || a%4==0 && a%100!=0){
						if(d>0 && d<=29){
						printf("\nData v�lida, ano bissexto.\n%d/%d/%d\n",d,m,a);
					break;
						}else if(d>0 && d<=28){
						printf("\nData v�lida.\n%d/%d/%d\n",d,m,a);
						break;
					}else{
						printf("\nData inv�lida.\nN�o existe %d/%d/%d\n",d,m,a);
						break;
					}
					
					}
					case 4:
					case 6:
					case 9:
					case 11:
					if(d>0 && d<30){
						printf("\nData v�lida.\n%d/%d/%d\n",d,m,a);
						break;
					}
			
	}
	
}else{
	printf("\nData inv�lida,\n");
}
getchar();
	return 0;
}
