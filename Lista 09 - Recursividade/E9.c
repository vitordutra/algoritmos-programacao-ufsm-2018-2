#include <stdio.h>
#include <stdlib.h>

/* 
Ex9 --> Escreva uma fun��o recursiva que determine quantas vezes um d�gito K ocorre em um n�mero natural N.
Por exemplo, o d�gito 2 ocorre 3 vezes em 762021192 
*/

int sumMatches(int n, int k, int i) {
	if(n % 10 == k) {
		i++;
	}
	if(n % 10 == n) {
		return i;
	}
	sumMatches(n / 10, k, i);
}

int main() {
	return 0;
}
