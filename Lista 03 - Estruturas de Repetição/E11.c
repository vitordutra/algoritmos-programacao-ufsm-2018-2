#include <stdio.h>
#include <stdlib.h>

/* 
11) Escreva um algoritmo que repita a soma dos números recebidos até que o total seja maior que
cem
*/

int main() 
{
	int a, b, soma;
	
	do
	{
		printf("Digite dois numeros: \n");
		scanf("%i", &a);
		scanf("%i", &b);
		soma = a + b;
		printf("Soma: %i\n", soma);	
	} while((a + b) < 100);
	
	return 0;
}
