#include <stdio.h>
#include <stdlib.h>

/*
/* Ex8 --> máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. Escreva uma função recursiva mdc em C,
que retorna o máximo divisor comum de x e y. O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x;
caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.
*/

int mdc(int a, int b){
	if (b == 0){
		return a;
	}
	mdc(b, a % b);
}

int main() {
	
	printf("%d", mdc(30, 45));
	return 0;
}
