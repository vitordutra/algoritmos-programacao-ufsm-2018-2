#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <locale.h>

#define nl 10
#define nc 3
/*
19) Escrever um programa que construa uma matriz 10 x 3 de números em ponto flutuante,
colocando em cada elemento da matriz o resultado da divisão do seu índice maior pelo menor.
Quando o menor índice for 0, deve ser colocado na matriz o valor -1.
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	float M[nl][nc];
	int i_maior, i_menor;
	
	printf("Matriz: \n");
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			// Aqui eu vou saber quais são os índices maior e menor
			if (i > j)
			{
				i_maior = i;
				i_menor = j;
			}
			else if (i < j)
			{
				i_maior = j;
				i_menor = i;
			}
			else
			{
				i_maior = i_menor = i;
			}
			
			// Aqui eu digo como preencher a Matriz
			if (i_menor == 0)
			{
				M[i][j] = -1;
			}
			else
			{
				M[i][j] = (float) i_maior/i_menor;
			}
			
			//Print da matriz
			printf("%.1f ", M[i][j]);
		}
		printf("\n");
	}
	return 0;
}
