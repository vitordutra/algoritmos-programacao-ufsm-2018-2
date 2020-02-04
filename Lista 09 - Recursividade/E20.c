#include <stdio.h>
#include <stdlib.h>

/* Ex20 --> Os números tribonacci são definidos pela seguinte recursão:
F(n) = 0 se n = 0; F(n) = 0 se n = 1; F(n) = 1 se n = 2; F(n) = F(n - 1) + F(n - 1) + F(n - 3) se n > 2
Faça uma função recursiva que receba um número N
e retorne o N-ésimo termo da sequência de tribonacci. */

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
