#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 39) Escreva uma função recursiva que calcule a multiplicação de dois números naturais, através de incrementos
sucessivos */
int multIncremento(int a, int b){
	if(a == 0 || b == 0) return 0;
	if(b == 1) return a;
	return a + multIncremento(a, b - 1);
}


int main(int argc, char *argv[]) {
	
	return 0;
}
