#include <stdio.h>
#include <stdlib.h>

/* 19) Fa�a uma fun��o que verifique se um valor � perfeito ou n�o. Um valor � dito perfeito quando
ele � igual a soma dos seus divisores excetuando ele pr�prio. (Ex: 6 � perfeito, 6 = 1 + 2 + 3, que
s�o seus divisores). A fun��o deve retornar 1 se o n�mero for perfeito e 0 se n�o for perfeito.*/

int perfeito(int x)
{
	int i, s = 0;
	for (i = 1; i < x; i++)
	{
		if (x % i == 0) // Se o n�mero do argumento for divis�vel por i, s = s + i;
		// x = 6; x / 1 = 0 ok -> s = 1
		// x / 2 = 3 % 0 ok s = 1 + 2 = 3
		// x / 3 = 2 % 0 ok s = 1 + 2 + 3 = 6
		{
			s += i;
		}
	}
	
	if (s == x) // Se s � igual ao numero do argumento, ele � perfeito
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
