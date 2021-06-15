#include <stdio.h>



int main(){



int chegadaH, chegadaM, saidaH, saidaM;

float vlTotal;



//Lê e armazena variáveis em horas e minutos

printf("Digite a hora de entrada no formato HH:MM ");

scanf("%d:%d", &chegadaH, &chegadaM);



printf("Digite a hora de saída no formato HH:MM ");

scanf("%d:%d", &saidaH, &saidaM);



//Converte chegada e saida para minutos (simplifica o calculo)

int chegada = chegadaH * 60 + chegadaM;

int saida = saidaH * 60 + saidaM;



//Valida se virou o dia, se sim, acrescenta 24h na saída

if(saida < chegada)

saida+= 24 * 60;



//Calcula a permanência em minutos

int permanencia = saida - chegada;



//Calcula a permanência em horas e minutos

int HH = permanencia/60;

int MM = permanencia % 60;





//Acrescenta valor para permanência acima 4 horas

if(permanencia > 4 * 60)

{

int dife = permanencia - (4 * 60);//variável auxiliar para calcular o valor a pagar acima de 4 horas

permanencia = permanencia - dife;//novo tempo de permanecia para calcular as demais faixas de preço

int resto = dife % 60;//validação para calcular a ultima hora cheia

if (resto > 0)

dife = dife - resto + 60;

vlTotal = dife * 2;

}

//Acrescenta valor para permanência acima 2 horas

if(permanencia > 2 * 60)

{

int dife = permanencia - (2 * 60);

permanencia = permanencia - dife;

int resto = dife % 60;

if (resto > 0)

dife = dife - resto + 60;

vlTotal = vlTotal + (dife * 1.4);

}

//Calcula valor para permanência que não entrou nas demais faixas

int resto = permanencia % 60;//validação para calcular a ultima hora cheia

if (resto > 0)

permanencia = permanencia - resto + 60;

vlTotal = vlTotal + (permanencia * 1);



//Converte valor para horas que será o valor a pagar

float vlTotalPg = vlTotal / 60;



//tempo total em minutos para validar os calculos

//printf("tempo total em minutos: %d\n\n", MM + (HH * 60));



//Escreve o tempo total estacionado em horas e minutos

printf("Tempo total estacionado: %d hora(s) e %d minuto(s)\n\n", HH, MM);



//Escreve valor a pagar

printf("Valor Total: R$%.2f\n", vlTotalPg);



return 0;

}
