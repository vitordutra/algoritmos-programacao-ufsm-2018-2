#include <stdio.h>
#include <stdlib.h>

/* Ex13 --> Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo par N e imprima todos os n�meros pares
de 0 at� N em ordem crescente. */

int retSeqPar(int n) {
	if(n < 0) {
		return 0;
	}
	2 + retSeqPar(n - 2);
	printf("%d ", n);
}

int retSeqParSig(int n) {
	if(n < 0) {
		return -1 * retSeqPar(n);
	}
	return retSeqPar(n);
}

int main() {
	
	printf("%d", retSeqPar(20));
	
	return 0;
}
