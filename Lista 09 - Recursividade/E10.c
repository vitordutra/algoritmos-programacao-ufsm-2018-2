#include <stdio.h>
#include <stdlib.h>

/* Ex10 --> A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Proponha um algoritmo recursivo
Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros */

int multRec(int a, int b) {
	if(a == 0 || b == 0) { // Caso base
		return 0;
	}
	if(b == 1) { // Critério de Parada
		return a;
	}
	
	return a + multRec(a, b - 1); // Parte recursiva
}

int main() {
	
	printf("%d", multRec(2,4));
	
	return 0;
}
