#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

/*
3) Escreva um algoritmo que receba uma frase e a retorne escrita de trás pra frente.
*/

int main(int argc, char *argv[]) 
{
	int x, y, tam;
	char nome[100];
	
	printf("Digite uma palavra: ");
	gets(nome);
	
	tam = strlen(nome);
	
	printf("A palavra de tras pra frente: ");
	
	for (x = tam - 1; x >= 0; x--)
		printf("%c", nome[x]);
		printf("\n\n");
		
	return 0;
}
