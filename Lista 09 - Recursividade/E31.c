#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 31) Escreva, usando a linguagem C, uma função recursiva, SomaSerie(i,j,k: inteiro): inteiro, que devolva a
soma da série de valores do intervalo [i,j], com incremento k. */

int somaSerie(int i, int j, int inc) {
	if(j - i <= 0) {
		printf("PRECISA HAVER UM INTERVALO!");
		exit(0);
	}
	if(i + inc >= j) {
		printf("O INCREMENTO IGUALOU OU EXTRAPOLOU O LIMITE DO INTERVALO. A SOMA DOS ELEMENTOS DO INTERVALO EH ");
		return i + j;
	}
	int interna(int elemento, int limite, int incremento, int soma) {
		if(elemento > limite) return soma;
		soma += elemento;
		elemento += incremento;
		return interna(elemento, limite, incremento, soma);
	}
	int it = 1;
	int soma = 0;
	return interna(i, j, inc, soma);
}

int main(int argc, char *argv[]) {
	
	printf("%d", somaSerie(1, 10, 1));
	return 0;
}
