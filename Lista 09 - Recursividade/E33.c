#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
33) Crie um programa em C, que contenha uma função recursiva para encontrar o menor elemento em um vetor.
A leitura dos elementos do vetor e impressão do menor elemento devem ser feitas no programa principal.
*/

int * menorElementoVetor(int * vet, int n){
	int interna(int * vet, int n, int teste){
		if(n == 0) return teste;
		if(vet[n - 1] > vet[n]){
			int aux = vet[n];
			vet[n] = vet[n - 1];
			vet[n - 1] = aux;
			teste++;
		}
		interna(vet, n - 1, teste);
	}
	int teste = 0;
	int r = interna(vet, n - 1, teste);
	if(r == 0){
		return vet;
	}
	else{
		teste = 0;
		menorElementoVetor(vet, n);
	}
}

int main(int argc, char *argv[]) {
	
	return 0;
}
