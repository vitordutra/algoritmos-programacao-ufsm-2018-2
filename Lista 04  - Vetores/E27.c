#include <stdio.h>
#include <stdlib.h>

/*
27) Construa um algoritmo que permita informar dados para 2 vetores inteiros de 20 posições, e
apresente o conjunto união dos vetores. Lembrando que o conjunto união são todos os elementos
que existem em ambos os vetores, mas sem repetição (cada número pode aparecer um única vez
no resultado).
*/

int main(int argc, char *argv[]) 
{
	int v1[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int v2[20] = {1,2,3,4,5,6,7,8,9,10,21,22,23,24,25,26,27,28,29,30};
	int soma[40];
	int uniao[40];
	int i, j, k;
	
	// Pondo v1 no vetor soma
	for (i = 0; i < 20; i++)
	{
		soma[i] = v1[i];
	}
	
	// Pondo v2 no vetor soma
	for (i = 0; i < 20; i++)
	{
		soma[i + 20] = v2[i];
	}
	
	for (i = 0; i < 40; i++)
	{
		printf("%d ", soma[i]);
	}
	
	// Comparacao para ter o vetor uniao
	
	for (i = 0; i < 40; i++)
	{
		for (j = i + 1; j < 40; j++)
		{
			if (soma[i] == soma[j])
			{
				soma[j] = 0;
			}
		}
	}
	
	printf("\n\n");
	for (i = 0; i < 40; i++)
	{
		if (soma[i] != 0)
			printf("%d ", soma[i]);
	}
	return 0;
}
