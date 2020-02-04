#include <stdio.h>
#include <stdlib.h>

/*
24) Elabore um algoritmo que leia um vetor de 15 posições com números inteiros. Crie, a seguir,
um vetor resultante que contenha todos os números primos do vetor digitado. Escreva o vetor
resultante.
*/

int main(int argc, char *argv[]) 
{
	int v[15] = {932907, 151891, 787324, 884064, 938551, 868726, 175292, 44238, 768752, 669785, 980456, 763089, 802634, 390235, 810608};
	int primos[15];
	int i, j, k = 0;
	
	for (i = 0; i < 15; i++)
	{
		//Logica dos numeros primos
		for (j = 2; j <= v[i]-1; j++)
		{
			if (v[i] % j == 0)
				break;
		}
		
		if (j == v[i])
		{
			primos[k] = v[i];
			k++;
		}
	}
	
	printf("Numeros Primos do Vetor:\n");
	
	for (i = 0; i < k; i++)
	{
		printf("%d, ",primos[i]);
	}
	return 0;
}
