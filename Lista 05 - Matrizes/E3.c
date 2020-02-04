#include <stdio.h>
#include <stdlib.h>
#define lin 3
#define col 4


/*
3) Faça um algoritmo que leia uma matriz 3x4 de inteiros e em seguida troque a primeira linha com a última linha. Ao final a matriz alterada deve ser exibida
*/

int main(int argc, char *argv[]) 
{
	int mat[lin][col], temp[col];
	int i, j;
	
	// Ler os valores
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("Digite M[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	// Guardar no vetor temporario
	for (j = 0; j < col; j++)
	{
		temp[j] = mat[0][j];
	}
	
	// Troco a primeira pela ultima linha
	for (j = 0; j < col; j++)
	{
		mat[0][j] = mat [2][j];
	}
	
	for (j = 0; j < col; j++)
	{
		mat[2][j] = temp [j];
	}
	
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("M[%d][%d]: %d\n", i, j, mat[i][j]);
		}
	}

	return 0;
}
