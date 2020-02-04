#include <stdio.h>
#include <stdlib.h>

/* Ex23 --> Os n�meros de Pell s�o definidos pela seguinte recurs�o: P(n) = 0 se n = 0; P(n) = 1 se n = 1;
P(n) = 2P(n - 1) + P(n - 2) Alguns n�meros desta sequ�ncia s�o: 0, 1, 2, 5, 12, 29, 70, 169, 408, 985...
Fa�a uma fun��o recursiva que receba um n�mero N e retorne o N-�simo n�mero de Pell.*/

int pell(int n) {
	if(n == 0) {
		return 0;
	}
	if(n == 1) {
		return 1;
	}
	return 2 * pell(n - 1) + pell(n - 2);
}

int main(int argc, char *argv[]) {
	
	printf("%d", pell(10));
	
	return 0;
}
