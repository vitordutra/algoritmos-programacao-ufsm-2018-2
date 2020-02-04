#include <stdio.h>
#include <stdlib.h>

/*
11) Escreva um algoritmo que receba uma frase e um caractere e verifique em que posição da
frase o caractere digitado aparece pela última vez.
*/

int main() {
	char frase[50];
	char letra;
	int tam;
	
	printf("Digite uma frase: \n");
	fgets(frase, 50, stdin);
	
	printf("Digite uma letra: \n");
	letra = getchar();
	
	tam = strlen(frase) - 1;
	
	for (int i = tam; i > 0; i--)
	{
		if (letra == frase[i])
		{
			printf("A letra %c aparece pela ultima vez na posicao %d", letra, i+1);
			break;
		}
	}
	
	
	return 0;
}
