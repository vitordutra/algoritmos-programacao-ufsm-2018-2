#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 36) Um palíndromo é uma string que é lida da mesma maneira da esquerda para a direita e da direita para a
esquerda. Alguns exemplos de palíndromo são radar e a bola da loba (se os espaços forem ignorados) Escreva uma
função recursiva que retorna 1 se a string armazenada no array for um palíndromo e 0, caso contrário. O método
deve ignorar espaços e pontuação na string. */

/* e) Verificar se uma palavra é palíndromo. */
/* (a 0x61) até (z 0x7A) */

int palindromoTeste(char * str) {
	int interna(char * s, int i, int pos, int teste) {
		if(pos == -1) {
			if(teste) return 0;
			return 1;
		}
		if(s[i] != s[pos]) {
			teste++;
			return 0;
		}
		return interna(s, i + 1, pos - 1, teste);
	}
	int i, t, comp, pos;
	pos = 0;
	comp = strlen(str);
	char s[comp];
	for(i = 0; i < comp; i++){
		if(str[i] < 0x61 || str[i] > 0x7a){
			continue;
		}
		s[pos] = str[i];
		pos++;
	}
	return interna(s, 0, pos - 1, 0);
}

int main(int argc, char *argv[]) {
	
	return 0;
}
