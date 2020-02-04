#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 6
#define nc 4

/*
21) Faça um programa que leia uma matriz M 6x4. Após isso, multiplique cada linha pelo maior
elemento da linha em questão. Mostre a matriz resultante.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[nl][nc];
	int maior[nl] = {}; // Equivale a 0,0,0,0,0,0
	int k = 0;
	
	//Gerar Matriz
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
	//Vetor com o maior valor de cada linha
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			if (maior[k] < M[i][j])
				maior[k] = M[i][j];
		}
		k++; //Incremento só depois de cada linha -> assim eu tenho certeza que maior[0] tem o maior valor da primeira linha, etc.
	}
	
	printf("Vetor Maior: \n");
	//Print do Vetor maior
	for (int i = 0; i < nl; i++)
	{
		printf("%d ", maior[i]);
	}
	printf("\n");
		
	k = 0;
	//Matriz Multiplicada
	printf("Matriz Multiplicada: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			M[i][j] *= maior[k];
			printf("%d ", M[i][j]);
		}
		printf("\n");
		k++;
	}
	return 0;
}
