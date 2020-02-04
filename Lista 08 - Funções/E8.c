#include <stdio.h>
#include <stdlib.h>

/*
8) Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função
deve retornar 1 se o valor for positivo e 0 se for negativo.
*/

int main(int argc, char *argv[]) 
{
	int parOuImpar(int num);
	int num;
	
	num = parOuImpar(3);
	
	printf("retorno: %d", num);
	
	return 0;
}

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
