#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
10) Faça um algoritmo que receba uma string e uma letra. Em seguida, informe ao usuário em que
posição da string encontra-se a primeira ocorrência desta carácter.
*/

int main(int argc, char *argv[]) {
	char frase[50];
	char letra;
	int tam;
	
	printf("Digite uma frase: \n");
	fgets(frase, 50, stdin);
	
	printf("Digite uma letra: \n");
	letra = getchar();
	
	tam = strlen(frase) - 1;
	
	for (int i = 0; i < tam; i++)
	{
		if (letra == frase[i])
		{
			printf("A letra %c aparece pela primeira vez na posicao %d", letra, i+1);
			break;
		}
	}
	
	
	return 0;
}
