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
	int elem1, elem2, elem3, termo, termo_calculado, soma_termos;
	
	printf("Elemento 1: ");
	scanf("%i", &elem1);
	
	printf("Elemento 2: ");
	scanf("%i", &elem2);
	
	do
	{
		printf("Termo desejado (maior que 3): ");
		scanf("%i", &termo);
	} while(termo <= 3);
	
	soma_termos = elem1 + elem2;
	printf("Termo 1: %i\n", elem1);
	printf("Termo 2: %i\n", elem2);
	
	termo_calculado = 2;
	
	while (termo_calculado < termo)
	{
		termo_calculado = termo_calculado + 1;
		elem3 = elem1 + elem2;
		
		printf("Termo %i = %i\n", termo_calculado, elem3);
		soma_termos = soma_termos + elem3;
		elem1 = elem2;
		elem2 = elem3;
	}
	
	printf("Soma dos termos: %i", soma_termos);
	
	return 0;
}
