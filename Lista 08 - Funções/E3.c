#include <stdio.h>
#include <stdlib.h>

/*
3) Construa uma fun��o que receba dois valores reais como par�metro e retorne 1 se os n�meros
s�o iguais ou 0 se os n�meros s�o diferentes.
*/

int main(int argc, char *argv[]) 
{
	int compararNumeros(float x, float y);
	int retorno;
	
	retorno = compararNumeros(2, 3);
	
	printf("%d", retorno);
	
	return 0;
}

int compararNumeros(float x, float y)
{
	if (x == y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
