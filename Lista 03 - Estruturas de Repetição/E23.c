#include <stdio.h>
#include <stdlib.h>

/* 
23) Considere uma linha ferroviária entre São Paulo e Curitiba. Suponha que uma locomotiva
(trem) A parte de São Paulo para Curitiba com velocidade de 30 m/s enquanto que uma outra
locomotiva B parte de Curitiba para São Paulo no mesmo instante com velocidade de 40 m/s.
Considere a distância entre São Paulo e Curitiba de 400 Km. Escreva um algoritmo que calcule
iterativamente o tempo necessário para os maquinistas pararem as locomotivas antes que uma
colisão aconteça. O algoritmo deve calcular também a distância que as locomotivas devem
percorrer para que a colisão aconteça.
*/

int main() 
{
	int ta = 0, tb = 0, t = 0;
	
	for( ;(ta + tb) < 400000; ta = ta + 30, tb = tb + 40, t++)
	{

	}
	
	t--;
	printf("%d tempo antes da colisao \n", t);
	printf("%d distancia percorrida ate a colisao \n", (ta + tb));
		
	return 0;
}
