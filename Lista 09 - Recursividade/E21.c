#include <stdio.h>
#include <stdlib.h>

/* Ex21 --> Os n�meros tetranacci iniciam com quatro termos pr�-determinados e a partir da� todos os demais n�meros s�o
obtidos pela soma dos quatro n�meros anteriores. Os primeiros n�meros tetranacci s�o:
0, 0, 0, 1, 1, 2, 4, 8, 15, 29, 56, 108, 208... Fa�a uma fun��o recursiva que receba um n�mero N e retorne o
N-�simo termo da sequ�ncia de tetranacci. */
int tetranacci(int n) {
	if(n == 0 || n == 1 || n == 2) {
		return 0;
	}
	if(n == 3) {
		return 1;
	}
	return tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
}

int main(int argc, char *argv[]) {
	
	printf("%d", tetranacci(10));
	
	return 0;
}
