/*38. Leia uma data de nascimento de uma pessoa fornecida atrav�s de tr�s n�meros inteiros:
Dia, M�s e Ano. Teste a validade desta data para saber se esta � uma data v�lida. Teste
se o dia fornecido � um dia v�lido: dia > O, dia < 28 para o m�s de fevereiro (29 se o
ano for bissexto), dia < 30 em abril, junho, setembro e novembro, dia < 31 nos outros
meses. Teste a validade do m�s: m�s > 0 e m�s < 13. Teste a validade do ano: ano <
ano atual (use uma constante definida com o valor igual a 2008). Imprimir: �data v�lida�
ou �data inv�lida� no final da execu��o do programa.*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>
#define ano 2021;
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int d,m,a;
	a<=ano;
	m>0;
	m<=12;
	printf("Digite sua data de nascimento no modelo dd/mm/aa.\n");
	scanf("%d/%d/%d", &d,&m,&a);
	
	switch(m){
		case 2:
			if(a%400==0 || a%4==0 && a%100!=0 && d>0 && d<=29){
				printf("%0.2d/%0.2d/%0.2d � uma data v�lida.\n",d,m,a);
			}else if(d>28 && d<=28){
				printf("%0.2d/%0.2d/%0.2d � uma data v�lida.\n",d,m,a);
			}else{
				printf("%0.2d/%0.2d/%0.2d N�O � UMA DATA V�LIDA.\n",d,m,a);
			}
			break;
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(d>0 && d<=31){
					printf("%0.2d/%0.2d/%0.2d � uma data v�lida.\n",d,m,a);
				}else{
					printf("%0.2d/%0.2d/%0.2d N�O � UMA DATA V�LIDA.\n",d,m,a);
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(d>0 && d<=30){
					printf("%0.2d/%0.2d/%0.2d � uma data v�lida.\n",d,m,a);
				}else{
					printf("%0.2d/%0.2d/%0.2d N�O � UMA DATA V�LIDA.\n",d,m,a);
				}
				break;
	}
		
	
	
	return 0;
}
