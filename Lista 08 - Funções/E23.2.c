#include <stdlib.h>
#include <stdio.h>

/*23) Escrever um algorimo que leia um valor em reais  e chame uma fun��o que calcule
o menor n�mero poss�vel de notas de R$100,00, R$50,00, R$20,00, R$10,00, R$5,00, R$2,00 e R$1,00
em que o valor lido pode ser decomposto. Ignore os centavos. O algoritmo deve mostrar, na fun��o main, o valor lido e a rela��o de notas necess�rias.*/

struct funcao{
	int cem, cinquenta, vinte, dez, cinco, dois;
};

struct funcao testando(int x, struct funcao y);
void main(){
	printf("Insira um valor inteiro em reais - sem os centavos: ");
	int valor;
	scanf("%d", &valor);

	struct funcao teste;

	struct funcao result = testando(valor, teste);
	system("cls");
	printf("Para o valor %d:\nNotas de 100: %d\nNotas de 50: %d\nNotas de 20: %d\nNotas de 10: %d\nNotas de 5: %d\nNotas de 2: %d\n", valor, result.cem, result.cinquenta,
		result.vinte, result.dez, result.cinco, result.dois);
}
struct funcao testando(int x, struct funcao y){
	int aux = x;

	y.cem = aux / 100;
	aux = aux - (y.cem * 100);

	y.cinquenta = aux / 50;
	aux = aux - (y.cinquenta * 50);

	y.vinte = aux / 20;
	aux = aux - (y.vinte * 20);

	y.dez = aux / 10;
	aux = aux - (y.dez * 10);

	y.cinco = aux / 5;
	aux = aux - (y.cinco * 5);

	y.dois = aux / 2;
	aux = aux - (y.dois * 2);

	return y;
}
