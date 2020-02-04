#include <stdio.h>
#include <stdlib.h>

/*
23) Escrever um algorimo que leia um valor em reais e chame uma função que calcule o menor
número possível de notas de R$100,00, R$50,00, R$20,00, R$10,00, R$5,00, R$2,00 e R$1,00
em que o valor lido pode ser decomposto. Ignore os centavos. O algoritmo deve mostrar, na
função main, o valor lido e a relação de notas necessárias.
*/

typedef struct funcao
{
	int cem, cinquenta, vinte, dez, cinco, dois, um;
} funcao;

funcao numeroDeNotas(int valor);

int main(int argc, char *argv[]) 
{
	int valor = 4562;
	funcao resultado = numeroDeNotas(valor);
	printf("Numeros de notas de 100, 50, 20, 10, 5, 2 e 1, respectivamente:\n");
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n ", resultado.cem, resultado.cinquenta, resultado.vinte, resultado.dez, resultado.cinco, resultado.dois, resultado.um);
	return 0;
}

funcao numeroDeNotas(int valor)
{
	int aux = valor;
	funcao y;
	
	y.cem = aux/100;
	aux = aux - (y.cem*100);
	
	y.cinquenta = aux/50;
	aux = aux - (y.cinquenta*50);
	
	y.vinte = aux/20;
	aux = aux - (y.vinte*20);
	
	y.dez = aux/10;
	aux = aux - (y.dez*10);
	
	y.cinco = aux/5;
	aux = aux - (y.cinco*5);
	
	y.dois = aux/2;
	aux = aux - (y.dois*2);
	
	y.um = aux/1;
	aux = aux - (y.um*1);
	
	return y;
}
