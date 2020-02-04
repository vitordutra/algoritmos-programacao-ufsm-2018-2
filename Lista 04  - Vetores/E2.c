#include <stdio.h>
#include <stdlib.h>

/*
2) Escreva um algoritmo que leia dois vetores de 5 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor
resultante.
*/

int main(int argc, char *argv[]) 
{
	int a[5], b[5], c[5];
	int i = 0, j = 0, k = 0;
	
	for (i; i < 5; i++)
	{
		printf("Digite os 5 valores do vetor a: ");
		scanf("%i", &a[i]);
	}
	
	for (i = 0; i < 5; i++)
	{
		printf("Digite os 5 valores do vetor b: ");
		scanf("%i", &b[i]);
	}
	
	printf("O vetor resultante: ")
	for (i = 0; i < 5; i++)
	{
		c[i] = a[i]*b[i];
		printf("%i\t", c[i]);
	}
	
	
	return 0;
}
