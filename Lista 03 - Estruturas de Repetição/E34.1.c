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
	int canal = 1, np, total;
	int total2 = 0, total4 = 0, total5 = 0, total9 = 0;
	float audi2, audi4, audi5, audi9;
	
	
	do
	{
		while ((canal != 2) || (canal != 4) || (canal != 5) || (canal != 9))
		{
			printf("Digite o Canal: ");
			scanf("%i", &canal);
		}
		
		// Caso o canal seja igual a 0, saio do loop externo
		if (canal == 0)
		{
			break;
		}
		
		printf("Digite a quantidade de pessoas que estava assistindo esse canal: ");
		scanf("%i", &np);
		
		
		if (canal == 2)
		{
			total2 += np;
		}
		else if (canal == 4)
		{
			total4 += np;
		}
		else if (canal == 5)
		{
			total5 += np;
		}
		else if (canal == 9)
		{
			total9 += np;
		}
		
		total = total2 + total4 + total5 + total9;
		
		audi2 = (total2/total)*100;
		audi4 = (total4/total)*100;
		audi5 = (total5/total)*100;
		audi9 = (total9/total)*100;
		
		while ((canal != 2) || (canal != 4) || (canal != 5) || (canal != 9))
		{
			printf("Digite o Canal: ");
			scanf("%i", &canal);
		}
		
	} while(canal != 0);
	
	printf("A audi�ncia do Canal 2 � de %.1f %", audi2);
	printf("A audi�ncia do Canal 2 � de %.1f %", audi4);
	printf("A audi�ncia do Canal 2 � de %.1f %", audi5);
	printf("A audi�ncia do Canal 2 � de %.1f %", audi9);
	
	return 0;
}
