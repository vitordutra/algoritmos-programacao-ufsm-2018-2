#include <stdio.h>
#include <stdlib.h>

#define nl 5
#define nc 5
/*
10) Escreva um algoritmo que leia uma matriz M 5x5 de números reais, calcule e mostre a soma
dos elementos da diagonal secundária.
*/

int main(int argc, char *argv[]) 
{
	float M[nl][nc];
	float soma = 0;
	
	// Scan da matriz
	for(int i = 0; i < nl; i++)
	{
		for(int j = 0; j < nc; j++)
		{
			printf("Digite M[%d][%d]: ", i, j);
			scanf("%f", &M[i][j]);
		}
	}
	
	// Scan da matriz
	for(int i = 0; i < nl; i++)
	{
		for(int j = 0; j < nc; j++)
		{
			printf("%.1f ", M[i][j]);
		}
		printf("\n");
	}
	
	// Diagonal secundaria i == nc - 1 - j
	for(int i = 0; i < nl; i++)
	{
		for(int j = 0; j < nc; j++)
		{
			if (i == (nc - 1 - j))
				soma += M[i][j];
		}
	}
	
	printf("Soma Diagonal Sec = %.1f", soma);
	
	return 0;
}
