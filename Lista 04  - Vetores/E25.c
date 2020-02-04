#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
25) Faça um algoritmo que receba 10 números inteiros, guardando-os em um vetor A , e mostre:
a) Os números múltiplos de 3;
b) A soma dos números múltiplos de 3;
c) A posição que se encontra o maior múltiplo de 3
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	int A[10] = {471, 483, 494, 177, 441, 808, 183, 411, 822, 220, 290, 728, 291, 138, 800};
	int B[10];
	int i, j = 0, k;
	int soma = 0, maior = 0, indice_maior;
	
	// Fazer vetor com múltiplos de 3.
	for (i = 0; i < 10; i++)
	{
		if (A[i] % 3 == 0)
		{
			B[j] = A[i];
			j++;
		}
	}
	
	// Soma dos números múltiplos de 3
	for (i = 0; i < j; i++)
	{
		soma = soma + B[i];
	}
	
	//A posição que se encontra o maior múltiplo de 3
	for (i = 0; i < j; i++)
	{
		if (maior < B[i])
		{
			maior = B[i];
			indice_maior = i;
		}
	}
	
	//Resultados:
	printf("Vetor com múltiplos de 3\n");
	for (i = 0; i < j; i++)
	{
		printf(" %d ", B[i]);
	}
	
	printf("\nSoma dos números múltiplos de 3: %d\n", soma);
	printf("\nO maior múltiplo de 3 é: %d e se encontra na posição: %d\n", maior, indice_maior);
	
	return 0;
}
