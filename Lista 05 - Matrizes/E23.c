#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 4
#define nc 2

/*
23) Faça um algoritmo que leia uma matriz de 30 linhas e 5 colunas. Depois, some as colunas
individualmente e acumule a soma na 61ª linha da matriz. Imprima o resultado de cada coluna.
(Lembrete: para guardar o resultado é necessário declarar uma matriz de 31 x 10.)
OBS: Vou fazer 3 linhas e 2 colunas, daí o numero de linhas vai ser 4
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	int M[nl][nc] = {}; //Pro programa funcionar tenho que inicializar a matriz.
	
	
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			if (i != nl-1)
			{
				printf("Digite M[%d][%d]: ", i, j);
				scanf("%d", &M[i][j]);
				M[nl-1][j] += M[i][j];
			}	
		}
	}
	
//	M[3][0] = M[0][0] + M[1][0] + M[2][0]; 
//	M[3][1] = M[0][1] + M[1][1] + M[2][1]; 
	
	//Print da matriz
	
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			printf("%d ", M[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
