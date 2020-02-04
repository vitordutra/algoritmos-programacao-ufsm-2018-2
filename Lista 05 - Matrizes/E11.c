#include <stdio.h>
#include <stdlib.h>

#define nl 5
#define nc 5
/*
11) Escrever um algoritmo que leia valores para uma matriz 5 x 5 de inteiros e verifique qual o
menor elemento presente nas “bordas” da matriz, isto é, o menor entre os elementos que fazem
parte da primeira linha, da primeira coluna, da última linha e da última coluna.
*/

int main(int argc, char *argv[]) {
	
	int M[nl][nc];
	int menor = 999999;
	
	for(int i = 0; i < nl; i++)
	{
		for(int j = 0; j < nc; j++)
		{
			printf("Digite M[%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);
		}
	}
	
	for(int i = 0; i < nl; i++)
	{
		for(int j = 0; j < nc; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	// Primeira Linha
	for (int i = 0; i < 5; i++)
	{
		if (M[0][i] < menor)
			menor = M[0][i];
	}
	
	// Primeira Coluna
	for (int i = 0; i < 5; i++)
	{
		if (M[i][0] < menor)
			menor = M[i][0];
	}
	
	// Ultima Linha
	for (int i = 0; i < 5; i++)
	{
		if (M[4][i] < menor)
			menor = M[4][i];
	}
	
	// Ultima Coluna
	for (int i = 0; i < 5; i++)
	{
		if (M[i][4] < menor)
			menor = M[i][4];
	}
	
	printf("O menor numero nas bordas da matriz: %d", menor);
	return 0;
}
