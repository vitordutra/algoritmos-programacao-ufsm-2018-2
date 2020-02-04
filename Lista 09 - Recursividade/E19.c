#include <stdio.h>
#include <stdlib.h>

/* Ex19 --> Um fatorial exponencial é um inteiro positivo N elevado à potência de N-1, que por sua vez é elevado
à potência de N-2 e assim em diante. Ou seja, n ^ (n - 1) ^ (n - 2) ^ ...^ 1. Faça uma função recursiva que receba
um número inteiro positivo N e retorne o fatorial exponencial desse número.*/

unsigned int fatExp(int n) {
	if(n == 0) {
		exit(0);
	}
	if(n == 1 || n == 2) {
		return n;
	}
	unsigned int interna(int n, int k) {
		if(k == 1) {
			return n;
		}
		return interna(n * interna(n, k - 1), k - 1);
	}
	return interna(n, n - 1);
}

int main(int argc, char *argv[]) {
	
	printf("%d", fatExp(4));
	
	return 0;
}
