#include <stdio.h>
#include <stdlib.h>

/*
17) Escreva um algoritmo leia 2 n�meros inteiros e a opera��o a ser executada com esses dois
inteiros: (1) soma, (2) subtra��o, (3) multiplica��o e (4) divis�o. Cada uma das opera��es deve
ser implementada numa fun��o separada e toda a comunica��o com o utilizador deve ser feita na
fun��o principal.
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
		c = (float) a / b; // Convers�o explicita para float
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
