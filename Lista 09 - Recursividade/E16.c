#include <stdio.h>
#include <stdlib.h>

/* Ex16 --> O fatorial qu�druplo de um n�mero N � dado por (2n)!/n! Fa�a uma fun��o recursiva que receba um n�mero
inteiro positivo N e retorne o fatorial qu�druplo desse n�mero. */

int fatQuadruplo(int n) {
	
	int interna(int n, int k) {
		if(n == k) {
			return  k;
		}
		return n * interna(n - 1, k);
	}
	return interna(2 * n, n + 1); // k = n + 1
}

int main(int argc, char *argv[]) {
	
	printf("%d", fatQuadruplo(5));
	
	return 0;
}
