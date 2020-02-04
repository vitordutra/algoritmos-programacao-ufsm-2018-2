#include <stdio.h>
#include <stdlib.h>

/*
2) Faça um algoritmo que preencha uma matriz 3 x 5 com números inteiros, calcule e mostre a
quantidade de elementos entre 15 e 20
*/

int main(int argc, char *argv[]) 
{
	int M[3][5];
	int i, j, cont;
	
	// Scan dos elementos
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("Digite o elemento[%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);
		}
	}
	
	// Filtro dos elementos de 15 a 20
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((M[i][j] >= 15) && (M[i][j] <= 20))
			{
				cont++;
			}
		}
	}
	
	printf("Numero de elememntos de 15 a 20: %d", cont);
	return 0;
}
