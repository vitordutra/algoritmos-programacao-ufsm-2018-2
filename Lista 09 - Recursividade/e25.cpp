#include <stdio.h>
#include <stdlib.h>

/* Ex24 --> Os n�meros de Catalan s�o definidos pela seguinte recurs�o: C(n) = 1 se n = 0; 2(2n - 1)C(n - 1)/n + 1 se n > 0
Alguns n�meros desta sequ�ncia s�o: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786...
Fa�a uma fun��o recursiva que receba um n�mero N e retorne o N-�simo n�mero de Catalan. */

int catalan(int n) {
	if(n == 0) {
		return 1;
	}
	return 2 * (2 * n - 1) * catalan(n - 1) / (n + 1);
}

int main(int argc, char *argv[]) {
	
	printf("%d", catalan(10));
	
	return 0;
}
