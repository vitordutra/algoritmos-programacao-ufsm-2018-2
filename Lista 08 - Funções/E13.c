#include <stdio.h>
#include <stdlib.h>

/*
13) Escrever um programa que l� dois valores, x e y, e chama uma fun��o para calcular x y
(assuma x e y inteiros n�o negativos). A fun��o deve retornar o valor resultante para a fun��o
main, para ent�o ser exibido. N�o utilize a fun��o pronta pow!
*/

float pot(float x, float y)
{
	int i;
	float pot;
	pot = x;
	
	for (i = 1; i < y; i++)
	{
		pot = pot * x;
	}
	
	return pot;
}

int main(int argc, char *argv[]) 
{
	printf("%f", pot(2,10));
	return 0;
}
