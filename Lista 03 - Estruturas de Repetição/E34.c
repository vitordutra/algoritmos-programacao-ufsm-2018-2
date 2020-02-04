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

int main() 
{
	int canal, np, total;
	float audi2, audi4, audi5, audi9;
	
	
	do
	{
		do
		{
		printf("Digite o Canal: ");
		scanf("%i", &canal);
		}while ((canal != 2) || (canal != 4) || (canal != 5) || (canal != 9));
		
		
		if (canal == 0)
		{
			break;
		}
		
	}while(canal != 0);
	
	return 0;
}
