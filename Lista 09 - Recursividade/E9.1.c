#include <stdio.h>
#include <stdlib.h>

/* 
Ex9 --> Escreva uma fun��o recursiva que determine quantas vezes um d�gito K ocorre em um n�mero natural N.
Por exemplo, o d�gito 2 ocorre 3 vezes em 762021192 
*/

int sumMatches(int n, int k, int i) {
	if(n % 10 == k) { // Contador
		i++;
	}
	if(n % 10 == n) {// Crit�rio de parada
		return i;
	}
	sumMatches(n / 10, k, i);
}

int main() {
	
	printf("%d", sumMatches(762021192, 2, 0));
	
	return 0;
}
