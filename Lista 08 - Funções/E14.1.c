#include <stdio.h>
#include <stdlib.h>

/*
14) Criar uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função
deve retornar um valor booleano.
*/

int parOuImpar(int num)
{
	if (num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main(int argc, char *argv[]) 
{
	printf("%d", parOuImpar(3));
	return 0;
}
