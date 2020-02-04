#include <stdio.h>
#include <stdlib.h>

/*
13) Escrever um programa que lê dois valores, x e y, e chama uma função para calcular x y
(assuma x e y inteiros não negativos). A função deve retornar o valor resultante para a função
main, para então ser exibido. Não utilize a função pronta pow!
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
