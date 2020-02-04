#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*
7) Escreva um algoritmo que leia uma matriz 10 x 10 e um valor X. O algoritmo dever� fazer uma
busca desse valor na matriz e, ao final escrever a localiza��o (linha e coluna) ou uma mensagem
de �n�o encontrado�.
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");

	int M[10][10];
	int X, flag = 0;
	
	srand(time(NULL));
	
	printf("Matriz: \n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			M[i][j] = rand() % 10;
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite um valor: \n");
	scanf("%d", &X);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (M[i][j] == X)
			{
				printf("O valor %d est� em M[%d][%d]\n", X, i, j);
				flag = 1;
			}
		}
	}
	
	if (flag == 0)
		printf("Valor n�o encontrado.");
	
	
	return 0;
}
