#include <stdio.h>
#include <stdlib.h>

#define nl 3
#define nc 3

/*
12) Faça um programa que leia uma matriz 3x3 de números inteiros. Calcule e mostre a somadas linhas pares da matriz.
*/

int main() 
{
	int M[nl][nc] = {{1,0,0},
					 {4,5,6},
					 {1,0,0}};
	int soma = 0;
	
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			if (i % 2 == 0)
				soma += M[i][j];
		}
	}
	
	printf("Soma das linhas pares: %d", soma);			 				 
	return 0;
}
