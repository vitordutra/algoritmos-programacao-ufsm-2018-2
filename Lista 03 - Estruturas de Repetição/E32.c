#include <stdio.h>
#include <stdlib.h>

/*
32) A s�rie de Ricci difere da s�rie de Fibonacci porque os dois primeiros termos s�o fornecidos
pelo usu�rio. Os demais termos s�o gerados da mesma forma que na s�rie de Fibonacci, isto �,
os demais termos s�o sempre a soma dos dois termos anteriores. Implemente um algoritmo que
imprima um total de 10 termos da s�rie de Ricci, sendo lidos os dois primeiros termos.
*/

int main(int argc, char *argv[]) 
{
	//Declara��o de vari�veis
	int a, b, auxiliar, n, i;
	
	// Aqui foi necess�rio atribuir valores �s vari�veis a e b
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
