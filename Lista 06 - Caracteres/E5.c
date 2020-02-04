#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5) Declare duas strings com capacidade para 20 caracteres. Leia a primeira string. Em seguida,
copie o texto da primeira para a segunda string. Imprima no final o conteúdo das duas strings.
*/

int main(int argc, char *argv[]) {
	char s1[20];
	char s2[20];
	
	gets(s1);
	
	strcpy(s2, s1);
	
	puts(s2);
		
	return 0;
}
