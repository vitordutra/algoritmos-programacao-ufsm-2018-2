#include <stdio.h>
#include <stdlib.h>

#define nl 10
#define nc 5
/*
14) Escreva um algoritmo para ler uma matriz M 10x5. Encontre todos os números primos e efetue
a soma das suas posições. Uma soma para as linhas e outra para as colunas.
*/

int main(int argc, char *argv[]) 
{
	int k = 0;
	int soma_linha = 0, soma_coluna = 0;
	int M[nl][nc] = {{3, 67341, 76967, 45140, 54504},
	                 {69023, 24312, 46309, 88530, 87790},
	                 {9976, 59662, 38969, 52057, 34466},
	                 {81843, 27641, 11111, 71574, 66294},
	                 {72694, 86466, 36419, 97741, 76731},
	                 {65981, 95289, 29419, 89622, 91326},
	                 {24354, 38921, 30367, 71181, 44057},
	                 {22244, 57544, 62214, 68458, 16961},
	                 {77109, 87451, 31365, 32311, 36091},
					 {76676, 79501, 28299, 37819, 95292}};
	
	for (int i = 0; i < nl; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			// Algoritmo numeros primos
			for (k = 2; k <= M[i][j] - 1; k++)
			{
				if (M[i][j] % k == 0)
					break;
			}
			// Cuidado com esse algoritmo: o primeiro for tem um break só no if
			// daí eu saio do for e escrevo o segundo if
			//k tem que ser declarado formalmente no main.
			if (k == M[i][j])
				{
					printf("Numero primo: %d\n", M[i][j]);
					printf("Linha: %d\n", i);
					printf("Coluna: %d\n", j);
					//Parte que faz o que a questão pede
					soma_linha += i;
					soma_coluna += j;
				}
			// Fim algoritmo primos
		}
	}
	
	printf("Soma das linhas: %d\n", soma_linha);
	printf("Soma das colunas: %d\n", soma_coluna);
	return 0;
}
