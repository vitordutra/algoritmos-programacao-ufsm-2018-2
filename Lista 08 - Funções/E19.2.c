#include <stdio.h>
#include <stdlib.h>

/* 19) Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando
ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que
são seus divisores). A função deve retornar 1 se o número for perfeito e 0 se não for perfeito.*/

int perfeito(int x)
{
	int i, s = 0;
	for (i = 1; i < x; i++)
	{
		if (x % i == 0) // Se o número do argumento for divisível por i, s = s + i;
		// x = 6; x / 1 = 0 ok -> s = 1
		// x / 2 = 3 % 0 ok s = 1 + 2 = 3
		// x / 3 = 2 % 0 ok s = 1 + 2 + 3 = 6
		{
			s += i;
		}
	}
	
	if (s == x) // Se s é igual ao numero do argumento, ele é perfeito
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
	int num;
	num = perfeito(33550336);
	
	if (num)
	{
		printf("O numero eh perfeito\n");
	}
	else
	{
		printf("O numero nao e perfeito\n");
	}
	
	 
	return 0;
}
