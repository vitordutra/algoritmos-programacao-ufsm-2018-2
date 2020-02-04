#include <stdio.h>
#include <stdlib.h>

/*
21) A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um algoritmo que gere a série de FIBONACCI até o n-ésimo termo.
*/

void main() 
{
	//Declaração de variáveis
	int a, b, auxiliar, n;
	
	// Aqui foi necessário atribuir valores às variáveis a e b
	a = 0;
	b = 1;
	
	printf("Escreva um numero: ");
	scanf("%d", &n);
	printf("Serie de Fibonacci: \n");
	printf("%d\n", b);
	
	for (i = 0; i < n; i++)
	{
		auxiliar = a + b;
		a = b;
		b = auxiliar;
		
		// Imprimir o numero na tela
		printf("%d\n", auxiliar);
	}
}
