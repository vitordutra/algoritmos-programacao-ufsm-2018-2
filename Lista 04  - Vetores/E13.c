#include <stdio.h>
#include <stdlib.h>

/*
13) Escrever um algoritmo que gera os 10 primeiros números primos acima de 100 e os armazena
em um vetor de X(10) escrevendo, no final, o vetor X.
 */

int main(int argc, char *argv[]) 
{
	int j, res;
	int primo = 100;
	int k = 1;
	
	while (k <= 10)
	{
		int cont = 0;
		j = primo;
		
		while (j > 0)
		{
			res = primo % j;
			if (res == 0)
				cont = cont + 1;
			j = j - 1;
		}
		if (cont == 2)
		{
			printf("%d - numero primo\n", primo);
			k = k + 1;
		}
		primo = primo + 1;
	}
	
	return 0;
}
