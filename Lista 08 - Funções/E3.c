#include <stdio.h>
#include <stdlib.h>

/*
3) Construa uma função que receba dois valores reais como parâmetro e retorne 1 se os números
são iguais ou 0 se os números são diferentes.
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
