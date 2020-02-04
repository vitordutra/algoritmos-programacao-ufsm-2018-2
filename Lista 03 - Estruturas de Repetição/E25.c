#include <stdio.h>
#include <stdlib.h>

/*
25) Uma companhia de teatro deseja dar uma série de espetáculos. A direção calcula que a
R$ 5,00 o ingresso, serão vendido 120 ingressos, e que as despesas serão de R$200,00.
Diminuindo-se R$0,50 o preço dos ingressos, e que as vendas aumentem em 26 ingressos.
Faça um algoritmo que escreva uma tabela de valores de lucros esperados em função do preço
do ingresso, fazendo-se variar este preço de R$5,00 a R$1,00 de R$0,50 em R$0,50. Escreva,
ainda, o lucro máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a
obtenção desse lucro.
*/

int main(int argc, char *argv[]) 
{
	float preco, despesa = 200.0, lucro, maiorlucro = 0, precoMaximizaLucro;
	int qtvendas = 120, nIngressosMaximizaLucro;
	
	for (preco = 5.0; preco >= 1.0; preco = preco - 0.5, qtvendas = qtvendas + 26)
	{
		lucro = qtvendas*preco - despesa;
		printf("Preco do ingresso: %f\t Ingressos vendidos: %i \t Lucro Esperado: %f\n", preco, qtvendas, lucro);
		
		if (lucro > maiorlucro)
		{
			maiorlucro = lucro;
			precoMaximizaLucro = preco;
			nIngressosMaximizaLucro = qtvendas;			
		}
	}
	
	printf("\nMaior Lucro: %f\t Preco de Venda: %f\t Quantidade de ingressos vendidos: %i\t", maiorlucro, precoMaximizaLucro, nIngressosMaximizaLucro);
	return 0;
}
