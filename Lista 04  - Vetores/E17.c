#include <stdio.h>
#include <stdlib.h>

/*
17) Ler um vetor Q de 20 posi��es (aceitar somente n�meros positivos). Escrever a seguir o valor
do maior elemento de Q e a respectiva posi��o que ele ocupa no vetor.
*/

int main(int argc, char *argv[]) 
{
	srand(0); //Seed pra randomizar os numeros;
	int vetor[20];
	int i;
	
	for (i = 0; i < 20; i++)
	{
		vetor[i] = rand();
		printf("%d\n",vetor[i]);
	}
	return 0;
}
