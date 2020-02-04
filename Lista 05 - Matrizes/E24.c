#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 10
#define nc 10

/*
24) Escreva um algoritmo que lê uma matriz M(10,10) e a escreve. Troque, a seguir:
a) a linha 2 com a linha 8;
b) a coluna 4 com a coluna 10.
Escreva a matriz depois de modificada.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[nl][nc];
	int linha2[nc], linha8[nc], auxlinha[nc];
	int coluna4[nl], coluna10[nl], auxcoluna[nl];
	int i = 0, j = 0, k = 0, l = 1, m = 0, n = 0;
	
	//Gerar a Matriz
	printf("Matriz: \n");
	for (i = 0; i < nl; i++)
	{
		for (j = 0; j < nc; j++)
		{
			M[i][j] = l;
			printf("%d ", M[i][j]);
			l++;
		}
		printf("\n");
	}
	
	//Guardar Linha 2, Linha 8, Coluna 4 e Coluna 10;
	for (i = 0; i < nc; i++, k++)
	{
		linha2[k] = M[1][i];
		linha8[k] = M[7][i];
		coluna4[k] = M[i][3];
		coluna10[k] = M[i][9];
	}
	
	//Print dos vetores
	printf("Linha 2: ");
	for (i = 0; i < nc; i++)
	{
		printf("%d ", linha2[i]);
	}
	printf("\n");
	
	printf("Linha 8: ");
	for (i = 0; i < nc; i++)
	{
		printf("%d ", linha8[i]);
	}
	printf("\n");
	
	printf("Coluna 4: ");
	for (i = 0; i < nc; i++)
	{
		printf("%d ", coluna4[i]);
	}
	printf("\n");
	
	printf("Coluna 10: ");
	for (i = 0; i < nc; i++)
	{
		printf("%d ", coluna10[i]);
	}
	printf("\n");
	
	
	
	for (i = 0, k = 0; i < nc; i++, k++)
	{
		// Troca da linha 2 pela linha 8
		M[1][i] = linha8[k];
		M[7][i] = linha2[k];
		
		// Troca da coluna 4 pela coluna 10;
		M[i][3] = coluna10[k];
		M[i][9] = coluna4[k];
	}
	
	//Print da Matriz
	printf("Matriz Transformada: \n");
	for (i = 0; i < nl; i++, l++)
	{
		for (j = 0; j < nc; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	return 0;
}
