#include <stdio.h>

/*
7) Fa�a um algoritmo que receba n valores inteiros e positivos, calcule e imprima o maior e o
menor valor do conjunto.
*/

int main() 
{
	int num, max, min;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	max = min = num;
	
	while (num < 0)
	{
		printf("Digite um n�mero: \n");
		scanf("%d", &num);
	}
	
	return 0;
}
