#include <stdio.h>
#include <stdlib.h>

/*
12) O curso de Informática deseja saber se existem alunos cursando, simultaneamente, as
disciplinas de Lógica e Algoritmos e de Laboratório de Programação I. Coloque os números das
matriculas dos alunos que cursam Lógica e Algoritmos em um vetor, no máximo 15 alunos.
Coloque os números das matriculas dos alunos que cursam Laboratório de Programação I em
outro vetor, no máximo 10 alunos. Mostre o número da matricula que aparece nos dois vetores.
*/

int main(int argc, char *argv[]) 
{
	/* 
	Supondo que não serão informadas matrículas repetidas em cada uma das disciplinas 
	*/
	
	int algoritmos[15], logica[10], i, j, cont = 0;
	
	for (i = 0; i < 15; i++)
	{
		printf("Informe a matricula do %d aluno de Algoritmos: ", i+1);
		scanf("%d", &algoritmos[i]);
	}
	
	for (j = 0; j < 10; j++)
	{
		printf("Informe a matricula do %d aluno de Logica e Programacao: ", j+1);
		scanf("%d", &logica[j]);
	}
	
	// Se as matriculas forem iguais no curso 1 e no curso 2, eles cursam ambas!
	printf("Alunos que cursam ambas: \n");
	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (algoritmos[i] == logica[j])
			{
				printf("\t%d\n", algoritmos[i]);
				cont++;
			}
		}
	}
	printf("%d alunos cursam tanto algoritmos quanto logica de programacao\n", cont);
	return 0;
}
