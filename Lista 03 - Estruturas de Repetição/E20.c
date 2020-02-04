#include <stdio.h>
#include <stdlib.h>

/*
20) Faça um algoritmo que calcule e imprima a tabuada do um número informado pelo usuário. (1
a 10).
*/

int main(int argc, char *argv[]) 
{
	int num;
	int cont;
	int t = 1;
	
	printf("Digite um numero\n");
	printf("A tabuada desse numero sera mostrada para voce: ");
	scanf("%i", &num);
	
	printf("A tabuada do numero %i: \n", num);
	
	for (cont = 1; cont <= 10; cont++)
	{
		t = num*cont;
		printf("%i\n", t);
	}
	return 0;
}
