/*30. Fa�a um programa que receba tr�s n�meros e mostre-os em ordem crescente.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float a,b,c;
	printf("\nDigite tr�s n�meros:\n");
	scanf("%f %f %f", &a, &b, &c);
	if(a<b && b<c || a==b){
		printf("\n1�if\n(a)=%0.2f.\n(b)=%0.2f.\n(c)=%0.2f.\n\n",a,b,c);
	}else if (a<c && c<b || a==c){
		printf("\n1�else if\n(a)=%0.2f.\n(c)=%0.2f.\n(b)=%0.2f.\n\n",a,c,b);
	}else if(b<a && a<c){
		printf("\n2�else if\n\n(b)=%0.2f.\n(a)=%0.2f.\n(c)=%0.2f.\n\n",b,a,c);
	}else if(b<c && c<a || b==c){
	printf("\n3�else if\n(b)=%0.2f.\n(c)=%0.2f.\n(a)=%0.2f.\n\n",b,c,a);
	}else if(c<a && a<b){
		printf("\n4�else if\n(c)=%0.2f.\n(a)=%0.2f.\n(b)=%0.2f.\n\n",c,a,b);
	}else if(c<b && b<a){
		printf("\n5�else if\n(c)=%0.2f.\n(b)=%0.2f.\n(a)=%0.2f.\n\n",c,b,a);
	}else{
		printf("\nnumeros repetidos.\n");
	}
	return 0;
}
