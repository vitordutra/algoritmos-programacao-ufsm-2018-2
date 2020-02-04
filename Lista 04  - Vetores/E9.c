#include <stdio.h>
#include <stdlib.h>

/*
9) Faça um algoritmo que leia um vetor de 30 números inteiros e gere um segundo vetor cujas
posições pares são o dobro do vetor original e as ímpares o triplo.
*/

int v[30], v2[30];
int i, tam;

int main(int argc, char *argv[]) 
{
	tam = 10;
	
	for (i = 1; i <= tam; i++)
	{
		scanf("%i", &v[i]);
	}
	
	for (i = 1; i <= tam; i++)
	{
		if (v[i] % 2 == 0)
		{
			v2[i] = v[i]*2;
		}
		else
		{
			v2[i] = v[i]*3;
		}
	}
	
	printf("Vetor Resultante: \n");
	
	for (i = 1; i <= tam; i++)
		printf("%i\t", v2[i]);
		
	
	return 0;
}
