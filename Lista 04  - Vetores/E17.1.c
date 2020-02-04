#include <stdio.h>
#include <stdlib.h>

/*
17) Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor
do maior elemento de Q e a respectiva posição que ele ocupa no vetor.
*/

int main(int argc, char *argv[]) 
{
	srand(3); //Seed pra randomizar os numeros;
	int vetor[20];
	int i;
	int maior = 0, posicao_maior;
	
	for (i = 0; i < 20; i++)
	{
		vetor[i] = rand();
		printf("%d\n",vetor[i]);
	}
	
	for (i = 0; i < 20; i++)
	{
		if (maior < vetor[i])
		{
			maior = vetor[i];
			posicao_maior = i;
		}
	}
	
	printf("Maior Elemento: vetor[%d] = %d", posicao_maior, maior);
	
	return 0;
}
