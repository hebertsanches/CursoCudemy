/*29. Fa�a uma prova de matem�tica para crian�as que est�o aprendendo a somar n�meros
inteiros menores do que 100. Escolha n�meros aleat�rios entre 1 e 100, e mostre na
tela a pergunta: qual � a soma de a + b, onde a e b s�o os n�meros aleat�rios. Pe�a a
resposta. Fa�a cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
corretas, al�m de quantas vezes o aluno acertou.*/
#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i,a,b,r,acertos=0,s;
	srand(time(NULL));//permite que os numeros gerados nao se repitam ao iniciar o programa
	for(i=0; i<5; i++){
		a = (rand()%100);//gera numero random 
		b = (rand()%100);
		s=a+b;
		r=s;
		printf("\nQual � a soma de %d + %d?\n",a,b);
		scanf("%d", &r);
		if(r!=s){
			s=a+b;
			printf("\nErrou. Resposta correta �:%d\n",s);
		}else
		 acertos ++;
	}
	 printf("\nVoce acertou %d\n",acertos);
	
	
	
	return 0;
}
