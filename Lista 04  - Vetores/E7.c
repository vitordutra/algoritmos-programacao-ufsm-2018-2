#include <stdio.h>
#include <stdlib.h>

/*
7) Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a
m�dia da turma e contar quantos alunos obtiveram nota acima desta m�dia calculada. Escrever a
m�dia da turma e o resultado da contagem.
*/

float nota[20];
float soma, media;
int i, cont;

int main(int argc, char *argv[]) 
{
	soma = 0;
	for (i = 0; i < 20; i++)
	{
		printf("Digite a nota do %d � aluno: ");
		scanf("%d", nota[i]);
	}
	return 0;
}
