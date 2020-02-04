#include <stdio.h>
#include <stdlib.h>

/*
24) Uma loja tem 15 clientes cadastrados e deseja enviar uma correspond�ncia a cada um deles
anunciando um b�nus especial. Fa�a um algoritmo que leia o identificador do cliente e o valor de
suas compras no ano passado. Calcule e mostre um b�nus de 10% se o valor das compras for
menor que R$1.000,00 e de 15%, caso contr�rio.
*/

int main() 
{
	int id;
	float valorcompra, valorpago;
	
	for (id = 1; id <= 15; id++)
	{
		printf("Digite o valor da compra do cliente #%i: ", id);
		scanf("%f", &valorcompra);
		
		if (valorcompra <= 1000)
		{
			valorpago = valorcompra*1.1;
		}
		else
		{
			valorpago = valorcompra*1.15;
		}
		
		printf("O valor pago ao cliente #%i: %f\n", id, valorpago);
	}
	return 0;
}
