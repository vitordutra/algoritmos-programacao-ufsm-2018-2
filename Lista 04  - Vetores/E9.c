#include <stdio.h>
#include <stdlib.h>

/*
9) Fa�a um algoritmo que leia um vetor de 30 n�meros inteiros e gere um segundo vetor cujas
posi��es pares s�o o dobro do vetor original e as �mpares o triplo.
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
