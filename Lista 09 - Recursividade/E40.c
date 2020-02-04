#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 40) Escreva uma função recursiva que calcule a sequência dada por:
F(1) = 1
F(2) = 2
F(n) = 2 * F(n-1) + 3 * F(n-2). */

int sequencia2(int n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	return 2  * sequencia2(n - 1) + 3 * sequencia2(n - 2);
}

int main(int argc, char *argv[]) {
	
	return 0;
}
