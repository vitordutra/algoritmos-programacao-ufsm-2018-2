#include <stdio.h>
#include <stdlib.h>
# define tam 7
/*
3) Escreva um algoritmo que leia um vetor de 7 elementos inteiros. Encontre e mostre o menor
elemento e sua posição no vetor.
*/

//

int main(int argc, char *argv[]) 
{
	int v[tam], i, menor;
	
	for (i=0, menor = 0; i < tam; i++)
	{
		printf("Digite o valor de v[%i]: ", i);
		scanf("%i", &v[i]);
		// A partir do índice tenho o valor de menor
		if (v[i] < v[menor])
		{
			// Se é verdade, menor = i, se é falsidade, ignora
			menor = i;
		}
	}
	//O menor valor é VALOR na posição I
	
	printf("Menor elemento %i na posicao %d.\n", v[menor], menor);
	
	return 0;
}
