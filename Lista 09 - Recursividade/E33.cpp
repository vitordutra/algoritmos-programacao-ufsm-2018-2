#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 32) Faça uma função recursiva, em linguagem C, que calcule o valor da série S descrita a seguir para um valor
n>0 a ser fornecido como parâmetro para a mesma.

		S = (1 + 1^2)/1 = 2 + 5/2 + 10/3 + ... + (1 + n^2) / n

Escreva uma função recursiva em C que exibe todos os elementos em um array de inteiros, separados por espaço.
*/

float somaSerie2(int n) {
	float interna(int n, float soma) {
		if(n == 0) {
			return soma;
		}
		soma += ((1.0 + pow(n, 2.0)) / n);
		return interna(n - 1, soma);
	}
	float soma = 0.0;
	return interna(n, soma);
}

void exibeSomaSerie2(int n) {
	int * interna(int n, int i, int j, int v[]) {
		if(i == n) return v;
		v[i] = (int)((1.0 + pow(j, 2.0)) / j);
		printf("%d", v[i]);
		i += 1;
		v[i] = 0x20;
		printf("%c", v[i]);
		return interna(n, i + 1, j + 1, v);
	}
	int i = 0;
	int j = 1;
	int v[2 * n];
	interna(2 * n, i, j, v);
}

int main(int argc, char *argv[]) {
	
	printf("%f", somaSerie2(10));
	return 0;
}
