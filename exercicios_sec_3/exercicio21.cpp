#include <stdio.h>
#include <stdlib.h>

//Leia um valor de massa em libras e apresente-o convertido em quilogramas. 
//A fórmula de conversão é: K = L*0,45, sendo K a massa em quilogramas e
//L a massa em libras.
int main()
{
	float l, k;
	printf("Digite o valor da massa em Libras:\n");
	scanf("%f", & l);
	k = l*0.45;
	printf("%0.2f Libras correspondem a %0.2f Quilogramas.", l, k);
	system("PAUSE");
	return 0;
	
	
}
