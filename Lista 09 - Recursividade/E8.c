#include <stdio.h>
#include <stdlib.h>

/*
/* Ex8 --> m�ximo divisor comum dos inteiros x e y � o maior inteiro que � divis�vel por x e y. Escreva uma fun��o recursiva mdc em C,
que retorna o m�ximo divisor comum de x e y. O mdc de x e y � definido como segue: se y � igual a 0, ent�o mdc(x,y) � x;
caso contr�rio, mdc(x,y) � mdc (y, x%y), onde % � o operador resto.
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
