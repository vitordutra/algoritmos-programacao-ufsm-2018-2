#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
PODE CAIR DA PROVA

21) Escreva um algoritmo que chama uma fun��o que, recebendo um n�mero inteiro n�o negativo
como PAR�METRO, retorne o mesmo invertido. Ex: recebido como par�metro o valor 234, deve
retornar o inteiro 432
*/

int inverterNumeroInteiro(int num)
{
	int resto[digitos] = 0, digitos = 0, resultado;
	int i;
	
	while (num > 0)
	{
		resto[digitos] = num % 10;
		digitos++;
		num /= 10;
	}
	
	for (i = digitos; i > 0; i--)
	{
		resultado += resto[i] * pow(10, digitos);
	}
	
	return resultado;
}

int main(int argc, char *argv[]) {
	return 0;
}
