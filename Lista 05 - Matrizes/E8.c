#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*
8) Faça um algoritmo que preencha uma matriz 3 x 4, calcule e mostre:
- a quantidade de elementos pares;
- a soma dos elementos ímpares;
- a média de todos os elementos.
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[3][4];
	int cont_pares, soma_impares = 0, soma_total;
	float media;
	
	printf("Matriz: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			M[i][j] = rand() % 10;
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	//Quantidade de Pares
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (M[i][j] % 2 == 0)
				cont_pares++;
		}
	}
	
	//Soma Ímpares
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (M[i][j] % 2 == 1)
				soma_impares += M[i][j];
		}
	}
	
	//Soma de todos os elementos da matriz
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			soma_total += M[i][j];
		}
	}
	
	media = (float) soma_total/12;
	
	printf("Quantidade de Pares: %d\n", cont_pares);
	printf("Soma dos ímpares: %d\n", soma_impares);
	printf("Média: %f\n", media);
	
	return 0;
}
