#include <stdio.h>
#include <stdlib.h>

/* Ex20 --> Os n�meros tribonacci s�o definidos pela seguinte recurs�o:
F(n) = 0 se n = 0; F(n) = 0 se n = 1; F(n) = 1 se n = 2; F(n) = F(n - 1) + F(n - 1) + F(n - 3) se n > 2
Fa�a uma fun��o recursiva que receba um n�mero N
e retorne o N-�simo termo da sequ�ncia de tribonacci. */

int tribonacci(int n) {
	if(n == 0 || n == 1) {
		return 0;
	}
	if(n == 2) {
		return 1;

	}
	return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int main(int argc, char *argv[]) {
	
	printf("%d", tribonacci(10));
	
	return 0;
}
