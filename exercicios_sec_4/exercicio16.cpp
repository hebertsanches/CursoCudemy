/*Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o m�s
correspondente a este numero. Isto �, janeiro se 1, fevereiro se 2, e assim por diante.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int var;
	printf("Digite um n�mero entre 1 e 12.\n");
	scanf("%d", & var);
	switch(var){
		case 1:
			printf("\nJaneiro.");
			break;
			case 2:
				printf("\nFevereiro.");
				break;
				case 3:
					printf("\nMar�o.");
					break;
					case 4:
						printf("\nAbril.");
						break;
						case 5:
							printf("\nMaio.");
							break;
							case 6:
								printf("\nJunho.");
								break;
								case 7:
									printf("\nJulho.");
									break;
									case 8:
										printf("\nAgosto.");
										break;
										case 9:
											printf("\nSetembro.");
											break;
											case 10:
												printf("\nOutubro.");
												break;
												case 11:
													printf("\nNovembro.");
													break;
													case 12:
														printf("\nDezembro.");
														break;
														default:
															printf("\n N�mero Inv�lido.");
	}
	
	return 0;
}
