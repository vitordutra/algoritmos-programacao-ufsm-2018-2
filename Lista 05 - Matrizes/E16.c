#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <locale.h>

#define nl 5
#define nc 5
/*
16) Elabore um algoritmo que leia uma matriz M(5, 5) e a transforme numa matriz triangular
inferior, atribuindo zero a todos os elementos acima da diagonal principal, escrevendo-a ao final.
*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[nl][nc];
	
	printf("Matriz: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			if (i >= j) // Para a matriz triangular inferior i >= j ou seja, as linhas abaixo da diagonal principal vão ser preenchidas com números.
			{
				M[i][j] = rand() % 10;
			}
			else
			{
				M[i][j] = 0;
			}
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
