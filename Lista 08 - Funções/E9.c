#include <stdio.h>
#include <stdlib.h>

/*
9) Fa�a uma fun��o que recebe, por par�metro, um valor inteiro e positivo e retorna o n�mero de
divisores desse valor
*/

int main(int argc, char *argv[]) 
{
	return 0;
}

int numeroDivisores(int numero)
{
	int i;
	int contador_divisores = 0;
	
	for (i = 1; i <= numero; i++)
	{
		if (num % i == 0) // Se o n�mero for divisivel pelo contador ele � um divisor
		// portanto adiciono ao contador
		{
			contador_divisores++;
		}
	}
	
	printf("Numero de divisores de %d: %d", numero, contador_divisores);
}
