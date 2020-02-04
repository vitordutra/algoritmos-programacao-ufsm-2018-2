#include <stdio.h>
#include <stdlib.h>

/*
7) Faça um algoritmo que receba n valores inteiros e positivos, calcule e imprima o maior e o
menor valor do conjunto.
*/

void main() 
{
	int i = 0, n, numero, maior = numero, menor = numero;
	
	printf("Digite a quantidade de numeros que voce vai digitar: ");
	scanf("%d", &n);
	printf("Digite %d numeros: \n", n);
	
	for (i == 0;  i < n; i++)
	{
		scanf("%d", &numero);
		
		if (numero > maior)
		{
			maior = numero;
		}
		else
		{
			menor = numero;
		}
	}
	
	printf("O maior numero: %d\n", maior);
	printf("O menor numero: %d\n", menor);
}
