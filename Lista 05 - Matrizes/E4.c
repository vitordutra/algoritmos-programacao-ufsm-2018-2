#include <stdio.h>
#include <stdlib.h>

/*
4) Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.
*/

int main(int argc, char *argv[]) 
{
	int M[6][6];
	int i, j, cont;
	
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("Digite M[%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);
			if (M[i][j] > 10)
			{
				cont++;
			}
		}
	}
	
	printf("A matriz possui %d valores maiores que 10", cont);
	
	return 0;
}
