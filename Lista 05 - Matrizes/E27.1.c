#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define na 2
#define nr 10

/*
27) Leia uma matriz 100 x 10 que se refere respostas de 10 questões de múltipla escolha,
referentes a 100 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas
que podem ser a, b, c ou d. Seu algoritmo deverá comparar as respostas de cada candidato com
o gabarito e emitir um vetor Resultado, contendo a pontuação correspondente

* Vou diminuir pra dois alunos *
*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	char respostas[2][10];
	char gabarito[10];
	int pontuacao;
	int i = 0, j = 0, cont = 0;
	
	for (i = 0; i < 10; i++, j++)
	{
		printf("Digite o gabarito da questão %d: ", i+1);
		gabarito[i] = getchar();
		getchar(); // Segundo getchar pra não bugar
	}
	
	printf("\n");
	
	//Print do gabarito
	for (i = 0; i < 10; i++, j++)
	{
		printf("%c ", gabarito[i]);
	}
	
	for (i = 0; i < 2; i++)
	{
		cont = 0;
		for (j = 0; j < 10; j++)
		{
			printf("Digite a resposta %d do aluno %d: \n", j+1, i+1);
			respostas[i][j] = getchar();
			getchar(); // Segundo getchar pra não bugar
			
			if (gabarito[j] == respostas[i][j])
			{
				cont++;
			}
		}
		printf("Pontuação do aluno %d: %d pontos \n", i+1, cont);
	}
	
	return 0;
}
