#include <stdio.h>
#include <stdlib.h>

/* 
10) Faça um algoritmo para ler um número inteiro n e exibir os 10 números ímpares anteriores, em
ordem decrescente.
*/

int main() 
{
	int n, i = 10;
	
	printf("Digite um numero: ");
	scanf("%d", &i);
	
	for(i == 10; i <= 0; i--);
	{
		if (i % 2 == 1)
		{
			printf("%d", i);
		}
	}
	
	return 0;
}
