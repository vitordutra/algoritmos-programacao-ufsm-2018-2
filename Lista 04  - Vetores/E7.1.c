#include <stdio.h>
#include <stdlib.h>

/*
7) Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a
média da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a
média da turma e o resultado da contagem.
*/

float nota[20];
float soma, media;
float i, cont;

int main(int argc, char *argv[]) 
{
	soma = 0;
	for (i = 1; i <= 20; i++)
	{
		printf("Digite a nota do %d aluno: ", i);
		scanf("%d", &nota[i]);
		soma += nota[i];
	}
	
	media = soma/20.0;
	
	cont = 0;
	
	for (i == 1; i <= 20; i++)
	{
		if (nota[i] > media)
		{
			cont++;
		}
	}
	
	printf("Media: %f\n", media);
	printf("Quantidade de alunos acima da media: %i", cont);
	
	return 0;
}
