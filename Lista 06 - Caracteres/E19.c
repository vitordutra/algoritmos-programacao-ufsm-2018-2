#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
19) Faça um programa que leia uma cadeia de caracteres e a inverta.
Obs.: Lembre que uma cadeia de caracteres é finalizada com o '\0'
*/

int main(int argc, char *argv[]) {
	char s[50];
	char sinv[50];
	int j, tam, taminv;
	
	fgets(s, 50, stdin);
	tam = strlen(s);
	
	// j = tam - 1 porque o primeiro caractere tem de ser diferente de \0
	
	for (int i = 0, /*Parte mais importante!*/j = tam - 1 /*Parte mais importante!*/; i < tam; i++, j--){
		sinv[i] = s[j];	
	}
	taminv = strlen(sinv);
	
	sinv[taminv] = '\0';
	
	puts(sinv);
	return 0;
}
