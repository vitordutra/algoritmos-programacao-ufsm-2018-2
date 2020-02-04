#include <stdio.h>
#include <stdlib.h>

/*
10) Leia um vetor de 10 posições e um determinado valor X. Passe o vetor e este número para
uma função, que deve verificar quantas vezes este valor X aparece no vetor. Retornar o resultado
para a função main, exibindo o mesmo.
*/

int main(int argc, char *argv[]) 
{
	return 0;
}

int contarNumerosNoVetor(int vetor[10], int num)
{
	int i, cont = 0;
	
	for (i = 0; i < 10; i++)
	{
		if (vetor[i] == num)
		{
			cont++;
		}
	}
}
