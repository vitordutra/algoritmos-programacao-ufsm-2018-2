#include <stdio.h>
#include <stdlib.h>

/*
10) Leia um vetor de 10 posições e um determinado valor X. Passe o vetor e este número para
uma função, que deve verificar quantas vezes este valor X aparece no vetor. Retornar o resultado
para a função main, exibindo o mesmo.
*/

int main(int argc, char *argv[]) 
{
	int vetor[10] = {0, 0, 0, 0, 12, 14, 16, 0, 18, 20};
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
	
	printf("O numero %d aparece %d vezes no vetor\n", num, cont);
}
