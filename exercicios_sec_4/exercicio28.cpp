/*28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:

(a) Geométrica: raiz cubicav(x*y*z).

(b) Ponderada: (x+2*y+3*z)/6.

(c) Harmônica: (1)/1/x+1/y+1/z.

(d) Aritmética: x+y+z/3.*/

#include <stdio.h>
#include <math.h>
int i,acertos=0;
float a,b,soma,resp;

int main()
{
for(i=0; i<5; i++){
 a = (rand()%100) + 1;
 b = (rand()%100) + 1;
 soma = a+b;
 resp = soma;
 printf("qual é a soma de %f + %f?\n\n",a,b);
 scanf("%f",&resp);
 if (resp != soma)
  printf("resposta errada. a resposta certa e:%f\n",soma);
 else
 acertos ++;

}
printf("voce acertou em:%d\n",acertos);
return 0;

}
