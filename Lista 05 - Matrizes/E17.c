#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 5
#define nc 5

/*
17) Escreva um algoritmo que lê uma matriz M(5,5) e cria 2 vetores SL(5) e SC(5) que contenham,
respectivamente, as somas das linhas e das colunas de M. Escrever a matriz e os vetores criados.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[nl][nc];
	int SL[5] = {};// Tenho de inicializar SL e SC senão o programa buga
	int SC[5] = {};
	int k = 0;
	
	// Fazendo a Matriz
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			printf("%Digite M[%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);
		}
	}
	
	// Print da Matriz
	printf("Matriz: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	// Soma das Linhas
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			SL[k] += M[i][j];
		}
		k++; // Esse é o segredo pra manter k fixo pra somar todas as linhas
		// k depois do primeiro for.
	}
	
	k = 0;
	// Soma das Colunas
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			SC[k] += M[j][i]; // Pra somar colunas inverto i e j para j e i
		}
		k++; // Esse é o segredo pra manter k fixo pra somar todas as linhas
		// k depois do primeiro for.
	}
	
	printf("Soma das Linhas: \n");
	for (int i = 0; i < nl; i++)
	{
		printf("%d ", SL[i]);
	}
	printf("\n");
	printf("Soma das Colunas: \n");
	for (int i = 0; i < nc; i++)
	{
		printf("%d ", SC[i]);
	}
	return 0;
}
