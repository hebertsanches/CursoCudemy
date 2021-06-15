/*38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros:
Dia, Mês e Ano. Teste a validade desta data para saber se esta é uma data válida. Teste
se o dia fornecido é um dia válido: dia > O, dia < 28 para o mês de fevereiro (29 se o
ano for bissexto), dia < 30 em abril, junho, setembro e novembro, dia < 31 nos outros
meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano <
ano atual (use uma constante definida com o valor igual a 2008). Imprimir: “data válida”
ou “data inválida” no final da execução do programa.*/

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
				printf("%0.2d/%0.2d/%0.2d é uma data válida.\n",d,m,a);
			}else if(d>28 && d<=28){
				printf("%0.2d/%0.2d/%0.2d é uma data válida.\n",d,m,a);
			}else{
				printf("%0.2d/%0.2d/%0.2d NÃO É UMA DATA VÁLIDA.\n",d,m,a);
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
					printf("%0.2d/%0.2d/%0.2d é uma data válida.\n",d,m,a);
				}else{
					printf("%0.2d/%0.2d/%0.2d NÃO É UMA DATA VÁLIDA.\n",d,m,a);
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(d>0 && d<=30){
					printf("%0.2d/%0.2d/%0.2d é uma data válida.\n",d,m,a);
				}else{
					printf("%0.2d/%0.2d/%0.2d NÃO É UMA DATA VÁLIDA.\n",d,m,a);
				}
				break;
	}
		
	
	
	return 0;
}
