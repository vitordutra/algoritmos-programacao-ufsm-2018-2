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
	ordenar3Numeros(79, 78, 74);
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
	
	// C maior
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
	

	
	printf("%d\t%d\t%d\n", x.a, x.b, x.c);
	
	return x;
}
