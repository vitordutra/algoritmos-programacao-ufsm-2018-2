#include <stdio.h>
#include <stdlib.h>

/*
18) Fa�a uma fun��o que leia um n�mero n�o determinado de valores positivos (o usu�rio deve
digitar zero para encerrar a digita��o) e retorna a m�dia aritm�tica dos mesmos, exibindo este
resultado na fun��o principal (main).
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
