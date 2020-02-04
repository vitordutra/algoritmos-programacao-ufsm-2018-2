#include <stdio.h>
#include <stdlib.h>

/*
17) Escreva um algoritmo leia 2 números inteiros e a operação a ser executada com esses dois
inteiros: (1) soma, (2) subtração, (3) multiplicação e (4) divisão. Cada uma das operações deve
ser implementada numa função separada e toda a comunicação com o utilizador deve ser feita na
função principal.
*/
float diziaEuQueAAritmetica(int a, int b, int operacao)
{
	float c;
	
	if (operacao == 1)
	{
		c = a + b;
	}
	
	if (operacao == 2)
	{
		c = a - b;
	}
	
	if (operacao == 3)
	{
		c = a * b;
	}
	
	if (operacao == 4)
	{
		c = (float) a / b; // Conversão explicita para float
	}
	
	return c;
}

int main(int argc, char *argv[]) 
{
	printf("%f\n", diziaEuQueAAritmetica(2, 3, 1));
	printf("%f\n", diziaEuQueAAritmetica(2, 3, 2));
	printf("%f\n", diziaEuQueAAritmetica(2, 3, 3));
	printf("%f\n", diziaEuQueAAritmetica(2, 3, 4));
	
	return 0;
}
