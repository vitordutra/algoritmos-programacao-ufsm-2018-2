#include <stdio.h>

/*
7) Faça um algoritmo que receba n valores inteiros e positivos, calcule e imprima o maior e o
menor valor do conjunto.
*/

int main() 
{
	int num, max, min;
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	max = min = num;
	
	while (num < 0)
	{
		printf("Digite um número: \n");
		scanf("%d", &num);
	}
	
	return 0;
}
