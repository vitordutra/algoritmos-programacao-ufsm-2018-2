#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
16) Leia duas strings. Se as strings forem iguais escreva “strings iguais”. Caso contrário,
concatene as duas strings e imprima a string resultante
*/

int main() {
	char str1[10];
	char str2[10];
	int iguais;
	
	printf("Digite a string 1: \n");
	fgets(str1, 10, stdin);
	
	printf("Digite a string 2: \n");
	fgets(str2, 10, stdin);
	
	printf("\n\n");
	
	iguais = strcmp(str1, str2);
	
	if (iguais == 0)
		printf("Strings iguais");
	else{
		strcat(str1, str2);
		printf("%s", str1);
	}
	
	
	return 0;
}
