#include <stdio.h>
#include <stdlib.h>

/*
14) Criar uma fun��o que recebe um valor inteiro e verifica se o valor � par ou �mpar. A fun��o
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
