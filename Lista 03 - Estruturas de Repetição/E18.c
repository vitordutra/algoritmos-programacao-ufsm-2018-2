#include <stdio.h>
#include <stdlib.h>

/*
18) Escreva um algoritmo que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
S = 1 + 1/2 + 1/3 + 1/4 + … + 1/n 
*/

int main() 
{
	float s, a;
	int n;
	
	scanf("%d", &n);
	s = 0;
	
	for (a = 1; a <= n; a++)
	{
		s = s + (1/a);
	}
	
	printf("S = %f", s);
	
	return 0;
}
