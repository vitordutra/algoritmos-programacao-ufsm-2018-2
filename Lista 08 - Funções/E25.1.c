#include <stdio.h>
#include <stdlib.h>

/*
25) Escrever um algoritmo que chama uma função que retorna a soma dos números inteiros que
existem entre os números n1 e n2 (inclusive ambos) passados como parâmetros. A função deve funcionar inclusive se 

o valor de n2 for menor que n1. Ler n1 e n2 na função main e retornar para
a main o valor resultante. Ex:
- n=somaintervalo(3, 6); /* n recebe 18 (3 + 4 + 5 + 6) */
//- n=somaintervalo(5,5); /* n recebe 10 (5 + 5) */
//- n=somaintervalo(-2,3); /* n recebe 3 (-2 + -1 + 0 + 1 + 2 + 3) */
//- n=somaintervalo(4, 0); /* n recebe 10 (4 + 3 + 2 + 1 + 0) */
//*/

int somaIntervalo(int n1, int n2)
{
	int maior = n2, menor = n1, aux, soma = 0;
	
	// Essa parte do código vai normalizar o intervalo, isso é, fazer com que ele comece do menor vá até o maior
	
	if (n1 > n2)
	{
		aux = maior;
		maior = menor;
		menor = aux;
	}
	
	
	
	for (menor; maior >= menor; menor++) //o meio do for indica enquanto a condição for VERDADE ou seja, enquanto maior >= menor o algoritmo vai rodar
	// no momento que menor for maior ou igual que MAIOR, o for para.
	{
		soma = soma + menor;
	}
	
	// Correção de bug para o caso de n1 ser igual a n2;
	if (n1 == n2)
	{
		soma += soma;
	}
	
	return soma;
}

int main(int argc, char *argv[]) 
{
	printf("%d\n", somaIntervalo(3,6));
	printf("%d\n", somaIntervalo(5,5));
	printf("%d\n", somaIntervalo(-2,3));
	printf("%d\n", somaIntervalo(4,0));
	return 0;
}
