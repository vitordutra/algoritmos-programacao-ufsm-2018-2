#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <locale.h>

#define nl 3
#define nc 3

/*
20) Implemente um algoritmo que leia duas matrizes A(10, 10) e B(10, 10) e escreva os valores da
primeira que ocorrem em qualquer posição da segunda.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M1[nl][nc];
	int M2[nl][nc];
	
	printf("Matriz A: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			M1[i][j] = rand() % 10;
			printf("%d ", M1[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz B: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			M2[i][j] = rand() % 10;
			printf("%d ", M2[i][j]);
		}
		printf("\n");
	}
	
	//Tenho que comparar cada elemento da matriz A com toda Matriz B.
	// A[0][0] = B[0][0]? A[0][0] = B[0][1]? A[0][0] = B[0][2]?  A[0][0] = B[0][3]?...
	//EU ACHO: assim como para comparar vetores eram 2 fors, pra comparar matrizes são 4 fors
	//O algoritmo tá certo -> indice com maior velocidade -> n > k > j > i
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			for (int k = 0; k < nl; k++)
			{
				for(int n = 0; n < nc; n++)
				{
					if (M1[i][j] == M2[k][n])
						printf("O numero %d se repete nas duas matrizes\n", M1[i][j]);
				}
			}
		}
	}
	return 0;
}
