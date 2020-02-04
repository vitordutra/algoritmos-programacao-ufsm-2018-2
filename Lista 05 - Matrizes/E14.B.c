#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 12
#define nc 12

/*
14.B) Elabore um algoritmo para ler e imprimir uma matriz M 12x12 . Após isso:
- Determine a soma dos elementos da diagonal principal de M;
- Colocar os elementos da diagonal principal de M em um vetor V;
- Imprima o vetor V.
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[nl][nc];
	int soma = 0;
	int V[nl];
	int k = 0;
	
	printf("Matriz: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			if (i == j)
			{
				M[i][j] = rand() % 10;
				soma += M[i][j];
				V[k] = M[i][j];
				k++;
			}
			else
			{
				M[i][j] = 0;
			}
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	printf("Soma: %d\n", soma);
	printf("Vetor V: \n");
	for (int i = 0; i < nl; i++)
	{
		printf("%d ", V[i]);
	}
		return 0;
}
