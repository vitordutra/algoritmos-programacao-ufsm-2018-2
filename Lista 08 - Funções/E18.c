#include <stdio.h>
#include <stdlib.h>

/*
18) Faça uma função que leia um número não determinado de valores positivos (o usuário deve
digitar zero para encerrar a digitação) e retorna a média aritmética dos mesmos, exibindo este
resultado na função principal (main).
*/

void mediaAritmetica()
{
	float num = 1, soma = 0, media;
	int cont = 0;
	
	while (num != 0)
	{
		printf("Digite um numero: ");
		scanf("%f", &num);
		
		soma += num;
		cont++;
	}
	
	media
}

int main(int argc, char *argv[]) {
	return 0;
}
