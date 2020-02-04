#include <stdio.h>
#include <stdlib.h>

/* 
7) Crie um programa em C que receba um vetor de números reais
com 100 elementos. Escreva uma função recursiva que
inverta ordem dos elementos presentes no vetor.
*/

float inverteVetor(float vet[], int n){
	
	int aux;
	if (n % 2 == 0){
		aux = 0;
	}
	else{
		aux = -1;
	}
	
	float interna(float vet[], int n, int i){
		if (n == i){
			return vet[n];
		}
		float aux;
		
		interna(vet, n-1, i+1);
		aux = vet[n-1];
		vet[n-1] = vet[i+1];
		vet[i+1] = aux;
	}
	return (interna(vet, n, aux));
}


int main() {
	float v[] = {1, 2, 7, 16, 22, 29, 47, 55, 66, 90};
	
	for(int i = 0; i < 10; i++){
		printf("%f ", inverteVetor(v,10));
	}
	return 0;
}
