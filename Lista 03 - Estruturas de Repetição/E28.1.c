#include <stdio.h>
#include <stdlib.h>

/*
28) Criar um algoritmo que leia idade e sexo (0-masculino, 1-feminino) de várias pessoas. Calcule
e imprima a idade média, o total de pessoas do sexo feminino com idade entre 30-45 inclusive e o número total de pessoas do sexo masculino. 
O algoritmo termina quando se digita um número não positivo (0 ou um número negativo) para a idade.
*/

int main(int argc, char *argv[]) 
{
	int sexo = -1, qtmulheres3045 = 0, totalhomens = 0, idade = 1;
	float idade_media = 0.0, total = 0.0, soma = 0;
	
	while (idade > 0)
	{
		
		printf("Digite a idade da pessoa: ");
		scanf("%i", &idade);
		
		if (idade <= 0)
		{
			break;
		}
		
		soma += idade;
		total++;
		
		printf("Digite o sexo da pessoa: (0 - Masculino / 1 - Feminino): ");
		scanf("%i", &sexo);
				
		if ((idade >= 30) && (idade <= 45) && (sexo == 1))
		{
			qtmulheres3045++;
		}
		
		if (sexo == 0)
		{
			totalhomens++;
		}
		
	}
	
	idade_media = soma/total;
	
	printf("A idade media das pessoas e: %f\n", idade_media);
	printf("Quantidade de mulheres entre 30 e 45 anos: %i\n", qtmulheres3045);
	printf("Total de Homens: %i\n", totalhomens);
	
	return 0;
}
