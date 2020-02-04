#include <stdio.h>
#include <stdlib.h>

/*
5) Criar uma função que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em
ordem crescente.
*/
typedef struct crescente
{
	int maior;
	int medio;
	int menor;
} crescente;

crescente ordenar3Numeros(int a, int b, int c);

int main(int argc, char *argv[]) 
{
	ordenar3Numeros(1, 3, 2);
	ordenar3Numeros(32, 45, 35);
	return 0;
}

crescente ordenar3Numeros(int a, int b, int c)
{
	crescente x;
	// A maior
	if ((a > b) && (a > c))
	{
		x.maior = a;
		if (b > c)
		{
			x.medio = b;
			x.menor = c;
		}
		else
		{
			x.medio = c;
			x.menor = b;	
		}
	}
	
	// B maior
	if ((b > a) && (b > c))
	{
		x.maior = b;
		if (a > c)
		{
			x.medio = a;
			x.menor = c;
		}
		else
		{
			x.medio = c;
			x.menor = a;	
		}
	}
	
	// C maior
	if ((c > a) && (c > b))
	{
		x.maior = c;
		if (a > b)
		{
			x.medio = a;
			x.menor = b;
		}
		else
		{
			x.medio = b;
			x.menor = a;	
		}
	}
	
	printf("%d\t%d\t%d\n", x.menor, x.medio, x.maior);
	
	return x;
}
