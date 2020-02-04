#include <stdio.h>
#include <stdlib.h>

/*
26) Construa um algoritmo que permita informar dados para 2 vetores inteiros de 20 posições e
apresente a intersecção dos vetores. Lembrando que a intersecção são os elementos repetidos
em ambos os vetores, mas sem repetição (cada número pode aparecer uma única vez).
*/

int main(int argc, char *argv[]) 
{
	int v1[20] = {40, 16, 34, 23, 20, 4, 30, 38, 10, 45, 17, 31, 24, 25, 13, 37, 44, 44, 47, 44};
	int v2[20] = {38, 47, 6, 12, 29, 34, 9, 39, 23, 26, 49, 48, 25, 32, 7, 43, 44, 21, 22, 14};
	int v3[20];
	int i, j, k;
	
	// Fazendo o vetor interseção v3
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (v1[i] == v2[j])
			{
				v3[k] = v1[i];
				k++;
			}
		}
	}
	
	// Mas v3 tem um problema, ele mostra os numeros repetidos.
	// Para resolver isso, comparo valor a valor do vetor 3 com ele mesmo e vejo se tem algum valor repetido
	// Se tiver, ele é igual a 0;
	
	for (i = 0; i < k; i++)
	{
		for (j = i + 1; j < k; j++) // O mais importante é que o ponto de inicio de j tem de ser igual a i + 1, pois senão ele compara
									// todos os números com ele mesmo e transforma todos os valores do vetor em 0!
		{
			if (v3[i] == v3[j])
				v3[j] = 0;
		}
	}
	
	
	for (i = 0; i < k; i++)
	{
		if (v3[i] == 0) // se o valor for igual a 0, elimina
			continue;
		else
			printf("%d ", v3[i]);
	}
	
	return 0;
}
