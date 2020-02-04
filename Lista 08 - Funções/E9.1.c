#include <stdio.h>
#include <stdlib.h>

/*
9) Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de
divisores desse valor
*/
int numeroDivisores(int numero);

int main(int argc, char *argv[]) 
{
	numeroDivisores(7);
	numeroDivisores(9);
	numeroDivisores(5);
	numeroDivisores(12345678);
	return 0;
}

int numeroDivisores(int numero)
{
	int i;
	int contador_divisores = 0;
	
	for (i = 1; i <= numero; i++)
	{
		if (numero % i == 0) // Se o número for divisivel pelo contador ele é um divisor
		// portanto adiciono ao contador
		{
			contador_divisores++;
		}
	}
	
	printf("Numero de divisores de %d: %d\n", numero, contador_divisores);
}
