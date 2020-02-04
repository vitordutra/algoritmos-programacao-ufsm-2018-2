#include <stdio.h>
#include <stdlib.h>

/*
12) Faça um algoritmo que receba uma frase e faça a criptografia dela, substituindo as vogais
pelos seguintes números: a = 1, e = 2, i = 3, o = 4 e u = 5
*/

int main(int argc, char *argv[]) 
{
	char frase[50];
	char letra;
	int tam;
	
	printf("Digite uma frase: \n");
	fgets(frase, 50, stdin);
	
	tam = strlen(frase) - 1;
	
	for (int i = 0; i < tam; i++)
	{
		if ((frase[i] == 'a') || (frase[i] == 'A'))
			frase[i] = '1';
		else if ((frase[i] == 'e') || (frase[i] == 'E'))
			frase[i] = '2';
		else if ((frase[i] == 'i') || (frase[i] == 'I'))
			frase[i] = '3';
		else if ((frase[i] == 'o') || (frase[i] == 'O'))
			frase[i] = '4';
		else if ((frase[i] == 'u') || (frase[i] == 'U'))
			frase[i] = '5';
	}
	
	puts(frase);
	
	return 0;
}
