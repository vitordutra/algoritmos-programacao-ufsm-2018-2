#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 36) Um pal�ndromo � uma string que � lida da mesma maneira da esquerda para a direita e da direita para a
esquerda. Alguns exemplos de pal�ndromo s�o radar e a bola da loba (se os espa�os forem ignorados) Escreva uma
fun��o recursiva que retorna 1 se a string armazenada no array for um pal�ndromo e 0, caso contr�rio. O m�todo
deve ignorar espa�os e pontua��o na string. */

/* e) Verificar se uma palavra � pal�ndromo. */
/* (a 0x61) at� (z 0x7A) */

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
