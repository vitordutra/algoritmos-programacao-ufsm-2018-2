#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define na 2
#define nr 10

/*
27) Leia uma matriz 100 x 10 que se refere respostas de 10 quest�es de m�ltipla escolha,
referentes a 100 alunos. Leia tamb�m um vetor de 10 posi��es contendo o gabarito de respostas
que podem ser a, b, c ou d. Seu algoritmo dever� comparar as respostas de cada candidato com
o gabarito e emitir um vetor Resultado, contendo a pontua��o correspondente

* Vou diminuir pra dois alunos *
*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	char respostas[2][10];
	char gabarito[10];
	int pontuacao;
	int i = 0;
	
	for (i = 0; i < 10; i++)
	{
		printf("Digite o gabarito da quest�o %d: \n", i+1);
		gabarito[i] = getchar();
	}
	
	return 0;
}
