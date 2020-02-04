#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
5) Escreva um algoritmo que leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do
maior valor.
*/

int main(int argc, char *argv[]) 
{
	srand(time(NULL));
	int m[10][10];
	int maior = 0, imaior, jmaior;
	
	// Criação da matriz
	for (int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			m[i][j] = rand() ;
			printf("m[%d][%d] = %d\n", i, j, m[i][j]);
		}
	}
	
	// Maior valor tá onde?
	for (int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if (maior < m[i][j])
				{
					maior = m[i][j];
					imaior = i;
					jmaior = j;
				}			
		}
	}
	
	printf("Maior valor: %d; Linha %d; Coluna: %d", maior, imaior, jmaior);
	return 0;
}
