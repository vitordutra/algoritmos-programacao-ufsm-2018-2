#include <stdio.h>
#include <stdlib.h>

#define tam 10
/*
7) Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a
média da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a
média da turma e o resultado da contagem.
*/

float nota[tam];
float soma = 0, media;
int i, cont;

int main(int argc, char *argv[]) 
{
	soma = 0;
	for (i = 1; i <= tam; i++)
	{
		printf("Digite a nota do %d aluno: ", i);
		scanf("%f", &nota[i]);
		soma += nota[i];
	}
	
	media = soma/tam;
	
	cont = 0;
	
	for (i = 1; i <= tam; i++)
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
