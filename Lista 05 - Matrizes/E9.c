#include <stdio.h>
#include <stdlib.h>

/*
9) Faça um algoritmo que leia uma matriz A(M, N) e uma matriz B(M, N), M e N também são
valores lidos, efetue a soma entre estas matrizes e guarde o resultado na matriz A.
*/

int main(int argc, char *argv[]) 
{
	int M = 10, N = 10; // Tem que ser valores grandes pra não bugar, por algum motivo!!!
	int A[M][N];
	int B[M][N];
	int C[M][N];
	
	printf("Digite a quantidade de linhas M: ");
	scanf("%d", &M);
	
	printf("Digite a quantidade de colunas N: ");
	scanf("%d", &N);
	
	//Matriz A
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("Digite A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	
	//Matriz B
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("Digite B[%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	
	printf("Matriz A: \n");
	//Print Matriz A
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz B: \n");
	//Print Matriz B
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	
	//Matriz A -> Soma
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = A[i][j] + B[i][j];
		}
	}
	
	printf("Matriz A Soma: \n");
	//Print Matriz A
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
