#include <stdio.h>
#include <stdlib.h>

/*
34) Foi feita uma pesquisa de canal de TV em v�rias casas de uma certa cidade, num
determinado dia. Para cada casa visitada, foi preenchido uma ficha contendo o n�mero do canal
(2, 4, 5, 9) e o n�mero de pessoas que estavam assistindo naquela casa. Fa�a um algoritmo que:
- Receba um n�mero indeterminado de fichas, sendo que a �ltima ficha cont�m o n�mero do
canal igual a zero;
- Calcule a porcentagem de audi�ncia para cada emissora;
- Escreva o n�mero do canal e sua respectiva porcentagem.
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
