#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 10
#define nc 10
/*
15) Faça um algoritmo que leia uma matriz M 10x10 de números inteiros. A seguir, multiplique
cada linha pelo elemento da diagonal principal daquela linha. Mostre a matriz após as
multiplicações.
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[nl][nc];
	int V[nl]; // Vetor que vai guardar os elementos da diagonal principal
	int k = 0;
	
	// Matriz Original
	printf("Matriz: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			M[i][j] = rand() % 10;						
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	// Vetor com os elementos da diagonal principal
	printf("Vetor Diagonal Principal: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			if (i == j){
				V[k] = M[i][j];
				k++;
			}	
		}
	}
	
	// Print vetor V
	for (int i = 0; i < nl; i++)
	{
		printf("% d", V[i]);
	}
	printf("\n");
	
	// Multiplicar cada linha pelo elemento de V
	
	// Matriz Original
	printf("Matriz Multiplicada: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			M[i][j] = M[i][j]*V[i]; //Para multiplicar a linha é *V[i]; Pela coluna é *V[j]
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	return 0;
}
