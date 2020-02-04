#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
13) Escrever um algoritmo que gera os 10 primeiros números primos acima de 100 e os armazena
em um vetor de X(10) escrevendo, no final, o vetor X.
 */

int main(int argc, char *argv[]) 
{
	int X[10];
	int i = 0, num = 100;
	int j;
	bool ehprimo;
	
	while (i <= 10)
	{
		ehprimo = true;
		
		for (j = 2; j <= num - 1; j++)
		{
			if (j % 2 == 0)
			{
				ehprimo = false;
			}
		}
		
		if (ehprimo == true)
		{
			i = i + 1;
			X[i] = num;
		}
		
		num = num + 1;
	}
	
	for (i = 0; i < 10; i++)
	{
		printf("X[i]\n");
	}
	return 0;
}
