#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 46) Faça uma função recursiva que permita calcular a média um vetor de tamanho N. */

float media(int vet[], int n){
	float interna(int vet[], int n, int aux, float soma){
		if(n < 0) return soma / aux;
		soma += vet[n];
		return interna(vet, n - 1, aux, soma);
	}
	int soma = 0.0;
	return interna(vet, n - 1, n, soma);
}

int main(int argc, char *argv[]) {
	
	return 0;
}
