#include <stdio.h>
#include <stdlib.h>

/* Ex16 --> O fatorial quádruplo de um número N é dado por (2n)!/n! Faça uma função recursiva que receba um número
inteiro positivo N e retorne o fatorial quádruplo desse número. */

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
