#include <stdio.h>
#include <stdlib.h>

/*
19) Leia uma vetor de 20 elementos. Leia tamb�m um valor X. O algoritmo dever� fazer uma
busca desse valor no vetor e, ao final escrever a posi��o em que se encontra, ou uma mensagem
de �n�o encontrado�
*/

int main(int argc, char *argv[]) 
{
	srand(3); //Seed pra randomizar os numeros;
	int vetor[20];
	int i;
	int numero = 5, posicao_vetor = -1;
	
	for (i = 0; i < 20; i++)
	{
		vetor[i] = rand() % 17;
		printf("%d\n",vetor[i]);
	}
	
	for (i = 0; i < 20; i++)
	{
		if (vetor[i] == numero)
		{
			posicao_vetor = i;
			printf("\nPosicao de %d no vetor: %d\n", numero, posicao_vetor);
		}
	}
	
	if (posicao_vetor == -1)
		printf("\nNao encontrado\n");
	
	return 0;
}
