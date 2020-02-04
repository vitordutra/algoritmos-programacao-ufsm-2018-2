#include <stdio.h>
#include <stdlib.h>

/*
6) Implemente um algoritmo para declarar uma matriz 5 x 5. Preencha com 1 a diagonal principal
e com 0 os demais elementos. Escreva ao final a matriz obtida.
*/

int main(int argc, char *argv[]) 
{
	int M[5][5];
	
	// Fazendo a matriz.
	// Se i = j, o elemento faz parte da diagonal principal
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j)
				M[i][j] = 1;
			else
				M[i][j] = 0;
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n"); // A cada linha um espaço pra dar cara de matriz
	}
	return 0;
}
