#include <stdio.h>
#include <stdlib.h>

/* Ex11 --> Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0
até N em ordem crescente. */

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
