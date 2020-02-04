#include <stdio.h>
#include <stdlib.h>

/*
27) Implemente um algoritmo que imprima todos os números múltiplos de 3 entre m e n, com m<n.
Os valores inteiros de m e n devem ser informados como dados de entrada.
*/

int main(int argc, char *argv[]) 
{
	int m, n, i;
	
	printf("Digite m: ");
	scanf("%i", &m);
	
	printf("Digite n: ");
	scanf("%i", &n);
	
	printf("Os numeros multiplos de 3 entre %i e %i sao: ", m, n);
	
	for (i = m; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			printf("%i\n", i);
		}
	}
	
	
	return 0;
}
