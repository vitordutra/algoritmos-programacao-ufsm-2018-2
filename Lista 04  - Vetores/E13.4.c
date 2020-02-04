#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
13) Escrever um algoritmo que gera os 10 primeiros números primos acima de 100 e os armazena
em um vetor de X(10) escrevendo, no final, o vetor X.
 */

int main(int argc, char *argv[]) 
{
	int primos[10];
	int i, quantidade, num, divi;
	
	num = 101;
	quantidade = 0;
	
	while (quantidade < 10)
	{
		divi = 0;
		
		for (i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				divi = divi + 1;
			}
		}
		
		if (divi % 2)
		{
			primos[quantidade] = num;
			quantidade = quantidade + 1;
		}
		num = num + 1;
	}
	
	printf("Vetor dos 10 primeiros numeros primos acima de 100: \n");
	
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", primos[i]);
	}
	return 0;
}
