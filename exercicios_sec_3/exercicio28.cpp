#include<stdio.h>
#include<iostream>
#include<locale.h>

//Fa�a a leitura de tr�s valores e apresente como resultado a soma dos quadrados dos
//tr�s valores lidos.

int main(){


setlocale(LC_ALL, "portuguese");

float n1,n2,n3,n11,n22,n33,ns;

//getchar();
printf("Digite o 1� n�mero:");
scanf("%f", & n1);
printf("\nDigite o 2� n�mero:");
scanf("%f", & n2);
printf("\nDigite o 3� n�mero:");
scanf("%f", & n3);
n11=n1*n1;
n22=n2*n2;
n33=n3*n3;
ns=n11+n22+n33;
printf("\nO quadrado de cada n�mero � respectivamente:%0.2f, %0.2f e %0.2f\n",n11,n22,n33);
printf("\nO resultado da soma dos quadrados dos tr�s n�meros �:%0.2f\n",ns);
system("pause");
return 0;
}
