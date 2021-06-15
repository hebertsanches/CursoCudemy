/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Faça um programa em que o usuário entre com o valor e o estado destino do
produto e o programa retorne o preço final do produto acrescido do imposto do estado
em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem
de erro.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float v;
	int var;
	printf("Digite o valor do produto:\n");
	scanf("%f", &v);
	printf("Escolha o estado que sera enviado:\n1- MG.\n2- SP.\n3- RJ.\n4- MS.\n");
	scanf("%d", &var);
	if(v>0){
			switch(var){
		case 1:
			v=v+v*0.07;
			printf("Novo valor para MG é:%0.2f",v);
			break;
			case 2:
				v=v+v*0.12;
				printf("Novo valor para SP é:%0.2f",v);
				break;
				case 3:
					v=v+v*0.15;
					printf("Novo valor para RJ é:%0.2f",v);
					break;
					case 4:
						v=v+v*0.08;
						printf("Novo valor para MS é:%0.2f",v);
						break;
						default:
							printf("ERRO");
	}
	}else{
		printf("Valor do produto não pode ser %0.2f.",v);
	}

	return 0;
}
