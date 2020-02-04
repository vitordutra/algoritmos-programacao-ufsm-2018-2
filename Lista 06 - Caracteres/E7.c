#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
7) Escreva um algoritmo que troque todas as letras maiúsculas por minúsculas e as minúsculas
por maiúsculas de uma string dada pelo usuário.
*/

int main(void) {
	 char str[10];
	 char p[10];
	 	 
	 fgets(str, 10, stdin);
	 int tamanho = strlen(str);
	 
	 for (int i = 0; i < tamanho; i++)
	 {
	 	if (isupper(str[i]))
	 		p[i] = tolower(str[i]);
	 	else
	 		p[i] = toupper(str[i]);
	 }
	 puts(p);

	 return 0;
}
