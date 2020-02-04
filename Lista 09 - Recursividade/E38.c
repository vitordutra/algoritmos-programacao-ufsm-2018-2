#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 38) Escreva uma função recursiva que calcule a soma de dois números naturais, através de incrementos sucessivos
(Ex.: 3 + 2 = ++(++3)). */

int somaIncremento(int a, int b){
	if(a == 0) return b;
	if(b == 0) return a;
	return 1 + somaIncremento(a, b - 1);
}

int main(int argc, char *argv[]) {
	
	return 0;
}
