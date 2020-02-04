#include <stdio.h>
#include <stdlib.h>

/*
32) A série de Ricci difere da série de Fibonacci porque os dois primeiros termos são fornecidos
pelo usuário. Os demais termos são gerados da mesma forma que na série de Fibonacci, isto é,
os demais termos são sempre a soma dos dois termos anteriores. Implemente um algoritmo que
imprima um total de 10 termos da série de Ricci, sendo lidos os dois primeiros termos.
*/

int main(int argc, char *argv[]) 
{
	//Declaração de variáveis
	int a, b, auxiliar, n, i;
	
	// Aqui foi necessário atribuir valores às variáveis a e b
	a = 0;
	
	printf("Escreva o primeiro termo da serie de Ricci: ");
	scanf("%i", &b);
	
	printf("Escreva o segundo termo da serie de Ricci: ");
	scanf("%i", &a);
	
	printf("Escreva a quantidade de termos que sera calculada: ");
	scanf("%d", &n);
	
	printf("Serie de Ricci: \n");
	printf("%d\n", b);
	printf("%d\n", a);
	auxiliar = a + b;
	
	for (i = 0; i < n; i++)
	{
		auxiliar = a + b;
		a = b;
		b = auxiliar;
		
		// Imprimir o numero na tela
		printf("%d\n", auxiliar);
	}
	
	return 0;
}
