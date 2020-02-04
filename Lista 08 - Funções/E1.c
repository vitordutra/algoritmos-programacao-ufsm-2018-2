#include <stdio.h>
#include <stdlib.h>

/*
1) Escreva uma função que receba um valor inteiro como parâmetro e imprima este valor.
*/

int main(int argc, char *argv[]) 
{
	int valor_inteiro;
	valor_inteiro = valorInteiro(4);
	
	printf("%d", valor_inteiro);
	return 0;
}

int valorInteiro(int x)
{
	return x;
}
