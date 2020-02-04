#include <stdio.h>
#include <stdlib.h>

/*
29) Escreva um algoritmo que leia um vetor com 15 posições para números inteiros. Depois da
leitura divida todos os seus elementos pelo maior valor do vetor. Imprima o vetor após os cálculos.
*/

int main(int argc, char *argv[]) 
{
	int v1[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	float v2[15];
	int maior = 0;
	
	
	// Pegar maior valor
	for (int i = 0; i < 15; i++)
	{
		if (maior < v1[i])
			maior = v1[i];
	}
	
	//Dividir maior valor
	for (int i = 0; i < 15; i++)
	{
		v2[i] = (float) v1[i]/maior;
		printf("%f ", v2[i]);
	}
	
	return 0;
}
