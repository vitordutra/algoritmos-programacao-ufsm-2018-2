#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6) Faça um algoritmo que leia 2 strings. Mostre o conteúdo das mesmas e seus comprimentos.
Informe também se as duas strings possuem o mesmo comprimento.
*/

int main(int argc, char *argv[]) {
	char s1[20];
	char s2[20];
	
	int comp_s1, comp_s2;
	
	fgets(s1, 150, stdin);
	fgets(s2, 150, stdin);
	
	comp_s1 = strlen(s1);
	comp_s2 = strlen(s2);
	
	puts(s1);
	printf("\nComprimento %d\n", comp_s1);
	
	puts(s2);
	printf("\nComprimento %d\n", comp_s2);
	
	if (comp_s1 == comp_s2)
		puts("Os comprimentos são iguais");
		
	return 0;
}
