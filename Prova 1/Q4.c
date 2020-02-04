/*
Questão 4 (Peso 2.5). Crie uma estrutura para armazenar dados de funcionários: o nome e o ano de ingresso em uma empresa. Desenvolver um algoritmo que leia o ano atual,calcule e exiba o nome e o tempo de serviço de cada funcionário cadastrado (em anos), o nome do funcionário mais antigo da empresa e o nome do funcionário mais novo da empresa. Considere que a empresa tem 1000 funcionários.
*/

#include <stdio.h>

#define numero_funcionarios 1000

typedef struct dados
{
	char nome[20];
	int ano_ingresso;
} dado;

int main(void) 
{
	dado ufsm[numero_funcionarios];
	int i;
  int ano_atual, tempo_servico[numero_funcionarios];
	int maior_tempo = 0, menor_tempo = 1000;

	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
  
  for (i = 0; i < numero_funcionarios; i++)
	{
		printf("\nDigite o nome do funcionario %d: ", i + 1);
		scanf("%s", &ufsm[i].nome);

		printf("\nDigite o ano de ingresso do funcionario %d: ", i + 1);
		scanf("%d", &ufsm[i].ano_ingresso);

		tempo_servico[i] = ano_atual - ufsm[i].ano_ingresso;
	}

	for (i = 0; i < numero_funcionarios; i++)
	{
		printf("\nFuncionario %d: Nome: %s - Tempo de servico: %d anos", i+1, ufsm[i].nome, tempo_servico[i]);
	};

// Bloco de Codigo para o mais antigo
	for (i = 0; i < numero_funcionarios; i++)
	{
		if (tempo_servico[i] > maior_tempo)
		{
			maior_tempo = tempo_servico[i];
		}
	};

	for (i = 0; i < numero_funcionarios; i++)
	{
		if (tempo_servico[i] == maior_tempo)
		{
			printf("\nO(A) funcionario(a) mais antigo(a) da empresa e: %s !\n", ufsm[i].nome);
		}
	};

	// Bloco de Codigo Para o Mais novo
	for (i = 0; i < numero_funcionarios; i++)
	{
		if (tempo_servico[i] < menor_tempo)
		{
			menor_tempo = tempo_servico[i];
		}
	};

	for (i = 0; i < numero_funcionarios; i++)
	{
		if (tempo_servico[i] == menor_tempo)
		{
			printf("\nO(A) funcionario(a) mais novo(a) da empresa e: %s !\n", ufsm[i].nome);
		}
	};

	return 0;
}