#include <stdio.h>
#include <stdlib.h>

/*
28) Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e escrever a
quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.
*/

int main(int argc, char *argv[]) 
{
	//Numeros 
	int v1[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,2,1}; 
	int v2[15] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	
	int i, j, cont = 0;
	
	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if ((v1[i] == v2[j]) && (i == j))
			{
				printf("indice: %d numero: %d \n",i, v1[i]);
				cont++;
			}
		}
	}
	printf("Quantidade de vezes: %d", cont);
	return 0;
}
