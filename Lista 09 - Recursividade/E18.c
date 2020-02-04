#include <stdio.h>
#include <stdlib.h>

/* Ex18 --> O hiperfatorial de um número N, escrito H(n), é definido por H(n) = 1^1 * 2^2 * ... * (n - 1)^ n - 1 * n^n
Faça uma função recursiva que receba um número inteiro positivo N e retorne o hiperfatorial desse número. */

long int hiperFat(int n) {
	if(n == 1 || n == 0) {
		return 1;
	}
	long int interna(int n, int k) {
		if(k == 1) {
			return n;
		}
		return n * interna(n, k - 1);
	}

	return interna(n, n) * hiperFat(n - 1);
}
int main(int argc, char *argv[]) {
	
	printf("%d", hiperFat(5));
	return 0;
}
