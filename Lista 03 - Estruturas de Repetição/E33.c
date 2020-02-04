#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 33) Fazer um algoritmo que calcule e escreva o valor de S onde:
S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36... - 10/100 */

int main(int argc, char *argv[]) 
{
	float s;
	int n, a;
	
	scanf("%d", &n);
	s = 0;
	
	for (a = 1; a <= 10; a++)
	{
		if ((a % 2) == 0)
		{
			s = s - (a/pow(a, 2));
		}
		else
		{
			s = s + (a/pow(a, 2));
		}
	}
	
	printf("S = %f", s);
	
	return 0;
}
