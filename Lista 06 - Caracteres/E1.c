#include <stdio.h>
#include <stdlib.h>

/*
1) Faça um algoritmo para ler a frase “Disciplina de Logica e Algoritmo!”
*/

int main(int argc, char *argv[]) 
{
	char frase[50];
	printf("Digite uma frase: \n");
	gets(frase);
	printf("A frase digitada: \n");
	puts(frase);
	
	return 0;
}
