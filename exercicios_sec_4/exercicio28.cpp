/*28. Fa�a um programa que leia tr�s n�meros inteiros positivos e efetue o c�lculo de uma das
seguintes m�dias de acordo com um valor num�rico digitado pelo usu�rio:

(a) Geom�trica: raiz cubicav(x*y*z).

(b) Ponderada: (x+2*y+3*z)/6.

(c) Harm�nica: (1)/1/x+1/y+1/z.

(d) Aritm�tica: x+y+z/3.*/

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
 printf("qual � a soma de %f + %f?\n\n",a,b);
 scanf("%f",&resp);
 if (resp != soma)
  printf("resposta errada. a resposta certa e:%f\n",soma);
 else
 acertos ++;

}
printf("voce acertou em:%d\n",acertos);
return 0;

}
