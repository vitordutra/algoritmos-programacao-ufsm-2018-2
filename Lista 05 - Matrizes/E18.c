#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 6
#define nc 6

/*
18) Elaborar um programa que lê uma matriz M(6,6) e um valor A e multiplica a matriz M pelo
valor A e coloca os valores da matriz multiplicados por A em um vetor de V(36) e escreve no final
o vetor V.
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[nl][nc];
	int A;
	int V[36] = {}; // Por precaução, sempre vou inicializar meus vetores.
	int k = 0;
	
	// Fazendo a Matriz
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
	
	// Digitando o Valor de A
	printf("Digite um valor A: \n");
	scanf("%d", &A);
	
	// Fazendo a Multiplicação e guardando no vetor V
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			V[k] = A*M[i][j];
			k++;
		}
	}
	
	//Print de V
	printf("Vetor V: ");
	for (int i = 0; i < 36; i++)
	{
		printf("%d ", V[i]);
	}
	
		
	return 0;
}
