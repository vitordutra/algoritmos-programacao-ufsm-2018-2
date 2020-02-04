#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
31) Uma locadora de v�deos tem guardada, em um vetor de 50 posi��es, a quantidade de filmes
retirados por seus clientes durante o ano de 2010. Agora, esta locadora est� fazendo uma
promo��o e, para cada 10 filmes retirados, o cliente tem direito a uma loca��o gr�tis. Fa�a um
algoritmo que crie um outro vetor contendo a quantidade de loca��es gratuitas a que cada cliente
tem direito.
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int qt[50] = {26, 17, 29, 33, 60, 82, 77, 95, 32, 86, 9, 65, 12, 4, 21, 81, 99, 34, 38, 67, 41, 13, 43, 52, 6, 73, 87, 5, 76, 24, 39, 48, 90, 51, 70, 89, 53, 97, 79, 30, 40, 83, 61, 16, 94, 8, 100, 66, 78, 98};
	int loc_gratis[50];
	
	for (int i = 0; i < 50; i++)
	{
		printf("Loca��es do cliente %d: %d\n", i+1, qt[i]);
		loc_gratis[i] = qt[i]/10;
		printf("Quantidade de loca��es gratuitas que o cliente tem direito: %d\n", loc_gratis[i]);
	}
	
	
	return 0;
}
