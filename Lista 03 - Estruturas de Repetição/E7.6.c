#include <stdio.h>
#include <stdlib.h>

/* 
7) Faça um algoritmo que receba n valores inteiros e positivos, calcule e imprima o maior e o
menor valor do conjunto.
*/

int main() 
{
	int n, maior, menor;
	
	maior = menor = n = 0;
	
	printf("Digite um numero: \n");
	scanf("%d", &n);
	
	while (n > 0)
	{
		if (maior > n)
		{
			maior = n;
		}
		else if (menor < n)
		{
			menor = n;
		}
		printf("Digite um numero: \n");
		scanf("%d",&n);
	}
	
	if (maior > 0)
	{
		printf("Maior valor: %d\n", maior);
		printf("Menor valor: %d\n", menor);
	}
	else
	{
		printf("O numero digitado eh negativo.");
	}
	
	return 0;
}
