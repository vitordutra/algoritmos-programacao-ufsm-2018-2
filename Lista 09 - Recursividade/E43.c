#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 43) Uma sequência de Fibonacci generalizada, de f0 a f1 é definida como
fibg(f0, f1, 0), fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
fibg(f0, f1, 0) = f0
fibg(f0, f1, 1) = f1
fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1.
Escreva uma função recursiva em C para calcular fibg(f0, f1, n).*/

int fibonacciGeneralizada(int a, int b, int n){
	if(n < 0) return -1;
	if(n == 0) return a;
	if(n == 1) return b;
	return fibonacciGeneralizada(a, b, n - 1) + fibonacciGeneralizada(a, b, n - 2);
}

int main(int argc, char *argv[]) {
	
	return 0;
}
