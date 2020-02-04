#include <stdio.h>
#include <stdlib.h>

/*
5) Criar uma função que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em
ordem crescente.
*/

int main(int argc, char *argv[]) 
{
	int *values = ordemCrescente(58, 1, 32);
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("%d\t", *(values + i));
	}
	return 0;
}

int ordemCrescente(int n1, int n2, int n3)
{
	int values[3] = {n1, n2, n3};
	int temp;
	
	if (n1 > n3)
	{
		temp = n1;
		n1 = n3;
		n3 = temp;
	}
	if (n1 > n2)
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	if (n2 > n3)
	{
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
	
	return *values;
}

