#include <stdio.h>
#include <stdlib.h>
# define tam 5
/*
4) Escreva um programa no qual são lidos valores para um vetor de 30 elementos inteiros, além
de outro valor, menor que 30, para uma variável n. Após a leitura o programa deve deslocar os
elementos para a esquerda tantas posições quantas indicadas por n. Os elementos que forem
deslocados para fora do vetor devem ser recolocados na outra extremidade.
*/

int main(int argc, char *argv[]) 
{
	int v[tam], i, n, t;
	
	for (i = 0; i < tam; i++)
	{
		printf("Digite o valor de v[%i]: ", i);
		scanf("%i", &v[i]);
	}
	
	printf("Digite o valor de n: ");
	scanf("%i", &n);
	
	for (i = 0; i < tam; i++)
	{
		if (i == (tam - 1))
		{
			printf("%d.\n", v[i]);
		}
		else
		{
			printf("%d ", v[i]);
		}
	}
	
	for ( ; n > 0; n--)
	{
		t = v[0];
		
		for (i = 0; i < (tam - 1); i++)
		{
			v[i] = v[i+1];
		}
		v[i] = t;
	}
	
	
	for (i = 0; i < tam; i++)
	{
		if (i == (tam-1))
		{
			printf("%d.\n", v[i]);
		}
		else
		{
			printf("%d, ", v[i]);
		}
	}
	
	return 0;
}
