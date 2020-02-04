#include <stdio.h>
#include <stdlib.h>

/*
21) A s�rie de Fibonacci � formada pela seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um algoritmo que gere a s�rie de FIBONACCI at� o n-�simo termo.
*/

void main() 
{
	//Declara��o de vari�veis
	int a, b, auxiliar, n;
	
	// Aqui foi necess�rio atribuir valores �s vari�veis a e b
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
