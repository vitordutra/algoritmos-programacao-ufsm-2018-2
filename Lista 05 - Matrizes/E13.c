#include <stdio.h>
#include <stdlib.h>

#define nl 4
#define nc 5
/*
13) Elabore um programa que leia uma matriz M 4x5, calcule e mostre um vetor com cinco
posições, onde cada posição contém a soma dos elementos de cada coluna da matriz. Mostre
apenas os elementos do vetor maiores que dez. Se não existir nenhum elemento maior que dez
mostre uma mensagem.
*/

int main(int argc, char *argv[]) 
{
	int M[nl][nc] = {{1,2,3,4,5},
	                 {1,2,3,4,5},
					 {1,2,3,4,5},
					 {1,2,3,4,5}};
	int soma[5] = {0,0,0,0,0};
	int flag = 0;
	
	//Vetor com a soma dos elementos
	// Soma dos elementos
	//a11, a12, a13, a14, a15 -> 1 Loop
	//a11 + a21, a12 + a22, a13 + a23, a14 + a24, a15 + a25 -> 2 Loop...
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			soma[j] += M[i][j];
		}
	}
	
	for (int j = 0; j < 5; j++)
	{
		printf("%d ", soma[j]);
	}
	
	//Mostrar os Elementos maiores que 10
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			if (M[i][j] > 10)
			{
				flag = 1;
				printf("M[%d][%d]: %d", i, j, M[i][j]);
			}			
		}
	}
	
	if (flag == 0)
	{
		printf("\nNão há elementos maiores que 10\n");
	}
	return 0;
}
