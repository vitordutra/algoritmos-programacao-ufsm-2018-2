#include <stdio.h>
#include <stdlib.h>

/*
15) Implemente um algoritmo que permita a entrada de n valores, um de cada vez, e informe
quantos, dentre os números lidos, são pares e quantos são ímpares.
*/

int main() 
{
	int numero, quant, i = 0, cont = 0;
	
	scanf("%d", &quant);
	
	for (i == 0; i < quant; i++)
	{
		scanf("%i", &numero);
		if (numero % 2 == 0)
		{
			cont++;
		}
	}
	
	printf("%i", cont);
	
	return 0;
}
