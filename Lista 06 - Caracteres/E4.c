#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4) Faça um algoritmo para ler uma string e retorne o número de palavras da mesma;
*/

int main(int argc, char *argv[]) 
{
	char texto[50];
	int i, c, cont = 0;
	
	fgets(texto, 150, stdin);
	
	c = strlen(texto);
	
	printf("Numero de letras = %d", c);
	
	for (i = 0; texto[i] != '\0'; i++)
	{
		if (texto[i] == ' ')
		{
			cont++;
		}
	}
	printf("\nNumero de palavras = %d", cont+1);
	return 0;
}
