#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
33) Fazer um algoritmo que calcule e escreva o valor de S onde:
S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36... - 10/100.
*/

int main(int argc, char *argv[]) 
{
	float a = 1, b = 1;
	float c = 1.0, soma = 0;
	int n = 1;
	
	for (a = 1, n; a <= 10; a++, n++)
	{
		b = pow(a, 2);
		printf("A = %.2f\n", a);
		printf("B = %.2f\n", b);
		
		if (n % 2 == 1)
		{
			c = a/b;
		}
		else
		{
			c = -a/b;
		}
		printf("C = %.2f\n", c);
		
		soma += c;
		printf("Soma = %.2f\n\n", soma);
	}
	return 0;
}
