#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 44) Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S(n) = 1^3 + 2^3 + ... + n^3 */

int somaCubos(int n){
	int interna(int i, int j, int n, int soma){
		if(j > n) return soma;
		soma  += i * i * i;
		return interna(i + 1, j + 1, n, soma);
	}
	int i = 0; int soma = 0; int j = 0;
	return interna(i, j, n, soma);
}

int main(int argc, char *argv[]) {
	
	return 0;
}
