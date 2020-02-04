#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 5
#define nc 5
/*
22) Elabore um algoritmo para ler uma matriz M 5x5. Calcule e mostre a quantidade de elementos
fora do intervalo [5, 15]
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[nl][nc];
	int cont;
	
	printf("Matriz: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			M[i][j] = rand() % 20;
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			if ((M[i][j] < 5) || (M[i][j] > 15))
			{
				printf("\nElemento menor que 5 ou maior que 15 -> M[%d][%d]: %d\n", i, j, M[i][j]);
				cont++;
			}
		}
	}
	
	printf("\nContador de Elementos: %d\n", cont);
	return 0;
}
