#include <stdio.h>
#include <stdlib.h>

/* Ex11 --> Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0
at� N em ordem crescente. */

int retNaturais(int n) {
	if(n == -1) {
		return 0;
	}
	1 + retNaturais(n - 1);
	printf("%d ", n);
}

int main() {
	
	printf("%d", retNaturais(20));
	
	return 0;
}
