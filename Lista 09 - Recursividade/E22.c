#include <stdio.h>
#include <stdlib.h>

/* Ex22 -->  A sequ�ncia de Padovan � uma sequ�ncia de naturais P(n) definida pelos valores iniciais
P(0) = P(1) = p(2) = 1 e a seguinte rela��o recursiva: P(n) = P(n - 2) + P(n - 3) se n > 2
Alguns valores da sequ�ncia s�o: 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28...
Fa�a uma fun��o recursiva que receba um n�mero N e retorne o N-�simo termo da sequ�ncia de Padovan. */

int padovan(int n) {
	if(n == 0 || n == 1 || n == 2) {
		return 1;
	}
	return padovan(n - 2) + padovan(n - 3);
}

int main(int argc, char *argv[]) {
	
	printf("%d", padovan(10));
	
	return 0;
}
