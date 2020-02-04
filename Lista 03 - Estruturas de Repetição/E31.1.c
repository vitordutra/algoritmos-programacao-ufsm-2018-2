#include <stdio.h>
#include <stdlib.h>

/*
31) Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve
fazer chutes até acertar o número imaginado. Como dica, a cada tentativa é dito se o número foi
alto ou baixo. Neste contexto, elabore um algoritmo que leia o número imaginado e os chutes,
mostrando ao final o número de tentativas necessárias para descobrir o número.
*/

int main(int argc, char *argv[]) 
{
	int num, chute, ntentativas;
	
	printf("Digite o numero que teu amigo tem que adivinhar! (Entre 0 e 100): ");
	scanf("%i", &num);
	
	system ("cls");
	
	while (chute != num)
	{
		printf("Chuta um numero!\n");
		scanf("%i", &chute);
		
		if (chute > num)
		{
			printf("ERRRROU!! MUITO ALTO!\n");
		}
		else if (chute < num)
		{
			printf("ERRROU!! MUITO BAIXO!!\n");
		}
		
		ntentativas++;
	}
	
	printf("O numero que voce tinha que adivinhar era %i. Voce acertou em %i tentativas\n", num, ntentativas);
	return 0;
}
