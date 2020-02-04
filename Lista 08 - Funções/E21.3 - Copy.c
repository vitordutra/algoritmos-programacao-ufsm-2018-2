#include <stdio.h>
#include <stdlib.h>

/*
PODE CAIR DA PROVA

21) Escreva um algoritmo que chama uma função que, recebendo um número inteiro não negativo
como PARÂMETRO, retorne o mesmo invertido. Ex: recebido como parâmetro o valor 234, deve
retornar o inteiro 432
*/

int reverterDigitos(int n)
{
	int r = 0;
	
	for ( ; n; n /= 10)
	{
		r = r*10 + n % 10;
	}
	
	return r;
}

int main()
{
	printf("%d", reverterDigitos(234));
	
	return 0;
}
