#include <stdio.h>
#include <stdlib.h>

/*
1) Crie um algoritmo que receba uma matriz 3x3 e depois exiba uma determinada linha da matriz
indicada pelo usuário.
*/

int main(int argc, char *argv[]) 
{
	int matriz[3][3];
	int i, j, cont;
	int linha;
	
	cont = 0;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Digite Matriz [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			printf("Matriz [%d][%d] : %d\n", i, j, matriz[i][j]);
			cont++;
		}
	}
	
	printf("Que linha você quer imprimir?(1, 2 ou 3): ");
	scanf("%d", &linha);
	
	if (linha == 1)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", matriz[0][j]);
		}
	}
	else if (linha == 2)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", matriz[1][j]);
		}
	}
	else if (linha == 3)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", matriz[2][j]);
		}
	}
	return 0;
}
