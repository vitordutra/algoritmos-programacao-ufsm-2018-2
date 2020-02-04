#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

4) Defina uma struct chamada ponto2d que tenha como atributos os pontos x, y. Crie duas
estruturas do tipo ponto2d chamadas ponto_inicial e ponto_final.
Leia os valores, calcule a distância e mostre o resultado.

*/

typedef struct ponto2d
{
	float x;
	float y;
} p2d;

int main(int argc, char *argv[]) 
{
	p2d ponto_inicial, ponto_final;
	float distancia;
	
	printf("Digite x do ponto inicial: ");
	scanf("%f", &ponto_inicial.x);
	
	printf("Digite y do ponto inicial: ");
	scanf("%f", &ponto_inicial.y);
	
	printf("Digite x do ponto final: ");
	scanf("%f", &ponto_final.x);
	
	printf("Digite y do ponto final: ");
	scanf("%f", &ponto_final.y);
	
	distancia = sqrt(pow((ponto_final.x - ponto_inicial.x),2) + pow((ponto_final.y - ponto_inicial.y),2));
	
	printf("A distancia entre o ponto (%.1f, %.1f) e o ponto (%.1f, %.1f) = %f", ponto_inicial.x, ponto_inicial.y,
	                                                                           ponto_final.x, ponto_final.y, distancia);
	
	return 0;
}
