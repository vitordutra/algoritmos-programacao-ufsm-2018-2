#include <stdio.h>
#include <stdlib.h>

/*
28) Criar um algoritmo que leia idade e sexo (0-masculino, 1-feminino) de v�rias pessoas. Calcule
e imprima a idade m�dia, o total de pessoas do sexo feminino com idade entre 30-45 inclusive e o n�mero total de pessoas do sexo masculino. 
O algoritmo termina quando se digita um n�mero n�o positivo (0 ou um n�mero negativo) para a idade.
*/

int main(int argc, char *argv[]) 
{
	int idade, sexo, qtmulheres3045; totalhomens;
	float idade_media;
	
	while (idade >= 0)
	{
		printf("Digite a idade da pessoa: ");
		scanf("%i", idade);
		
		printf("Digite o sexo da pessoa: (0 - Masculino / 1 - Feminino)");
		scanf("%i", sexo);
		
		if ((idade > 30) && (idade <= 45) && (sexo == 1))
		{
			qtmulheres3045++;
		}
		
		if (sexo == 0)
		{
			totalhomens++;
		}
	}
	
	printf("Quantidade de mulheres entre 30 e 45 anos: %i", qtmulheres3045);
	printf("Total de Homens: %i", totalhomens);
	
	return 0;
}
