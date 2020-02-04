#include <stdio.h>
#include <stdlib.h>

/* Ex10 --> A multiplica��o de dois n�meros inteiros pode ser feita atrav�s de somas sucessivas. Proponha um algoritmo recursivo
Multip_Rec(n1,n2) que calcule a multiplica��o de dois inteiros */

int multRec(int a, int b) {
	if(a == 0 || b == 0) { // Caso base
		return 0;
	}
	if(b == 1) { // Crit�rio de Parada
		return a;
	}
	
	return a + multRec(a, b - 1); // Parte recursiva
}

int main() {
	
	printf("%d", multRec(2,4));
	
	return 0;
}
