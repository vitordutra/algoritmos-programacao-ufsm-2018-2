#include <stdio.h>
#include <stdlib.h>

/*
34) Foi feita uma pesquisa de canal de TV em várias casas de uma certa cidade, num
determinado dia. Para cada casa visitada, foi preenchido uma ficha contendo o número do canal
(2, 4, 5, 9) e o número de pessoas que estavam assistindo naquela casa. Faça um algoritmo que:
- Receba um número indeterminado de fichas, sendo que a última ficha contém o número do
canal igual a zero;
- Calcule a porcentagem de audiência para cada emissora;
- Escreva o número do canal e sua respectiva porcentagem.
*/

int main(int argc, char *argv[]) 
{
	int canal, np;
	int total2 = 0, total4 = 0, total5 = 0, total9 = 0, total = 0; 
	float aud2, aud4, aud5, aud9;
	
	printf("Digite um Canal: (2, 4, 5 ou 9): ");
	scanf("%i", &canal);
	
	if (canal == 2)
	{
		printf("Quantas pessoas estão assistindo o canal 2? \n");
		scanf("%i", &np);
		total2 += np;
	}
	else if (canal == 4)
	{
		printf("Quantas pessoas estão assistindo o canal 4? \n");
		scanf("%i", &np);
		total4 += np;
	}
	else if (canal == 5)
	{
		printf("Quantas pessoas estão assistindo o canal 5? \n");
		scanf("%i", &np);
		total5 += np;
	}
	else if (canal == 9)
	{
		printf("Quantas pessoas estão assistindo o canal 9? \n");
		scanf("%i", &np);
		total9 += np;
	}
	else
	{
		printf("Canal invalido!!!\n");
	}
	
	total = total2 + total4+ total5 + total9;
	
	aud2 = (total2/total)*100;
	aud4 = (total4/total)*100;
	aud5 = (total5/total)*100;
	aud9 = (total9/total)*100;
	
	printf("A audiencia do canal 2 e de %.0f pct\n", aud2);
	printf("A audiencia do canal 4 e de %.0f pct\n", aud4);
	printf("A audiencia do canal 5 e de %.0f pct\n", aud5);
	printf("A audiencia do canal 9 e de %.0f pct\n", aud9);	
	
	return 0;
}
