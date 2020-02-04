#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 34) Escreva, usando a linguagem C, uma função recursiva, ImprimeSerie(i,j,k: inteiro), que imprime na tela a
série de valores do intervalo [i,j], com incremento k. */

void imprimeSerie(int i, int j, int k){
	void interna(int i, int j, int k, int soma){
		if(soma > j) exit(0);
		printf("%d ",soma);
		soma += k;
		return interna(i, j, k, soma);
	}
	int soma = i;
	return interna(i, j, k, soma);
}

int main(int argc, char *argv[]) {
	
	return 0;
}
