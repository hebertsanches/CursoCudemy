/*Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float n1,n2,n3,x;
	printf("Digite a nota da P1:\n");
	scanf("%f", &n1);
	printf("Digite a nota da P2:\n");
	scanf("%f", &n2);
	printf("Digite a nota da P3:\n");
	scanf("%f", &n3);
	x=(n1*1+n2*1+n3*2)/4;
	if(x>=60 && x<=100){
	printf("\n Aluno aprovado, nota %0.2f",x);	
	}else if(x>0 && x<60){
		printf("\nReprovado, nota %0.2f.\n",x);
		
	}else{
		printf("\nValor não aceito\n");
	}
	
	return 0;
}
