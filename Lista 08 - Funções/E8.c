#include <stdio.h>
#include <stdlib.h>

/*
8) Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � par ou �mpar. A fun��o
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
