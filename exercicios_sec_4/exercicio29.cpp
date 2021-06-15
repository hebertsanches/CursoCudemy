/*29. Faça uma prova de matemática para crianças que estão aprendendo a somar números
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na
tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a
resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
corretas, além de quantas vezes o aluno acertou.*/
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
		printf("\nQual é a soma de %d + %d?\n",a,b);
		scanf("%d", &r);
		if(r!=s){
			s=a+b;
			printf("\nErrou. Resposta correta é:%d\n",s);
		}else
		 acertos ++;
	}
	 printf("\nVoce acertou %d\n",acertos);
	
	
	
	return 0;
}
