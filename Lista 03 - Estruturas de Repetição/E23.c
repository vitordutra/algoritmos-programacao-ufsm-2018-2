#include <stdio.h>
#include <stdlib.h>

/* 
23) Considere uma linha ferrovi�ria entre S�o Paulo e Curitiba. Suponha que uma locomotiva
(trem) A parte de S�o Paulo para Curitiba com velocidade de 30 m/s enquanto que uma outra
locomotiva B parte de Curitiba para S�o Paulo no mesmo instante com velocidade de 40 m/s.
Considere a dist�ncia entre S�o Paulo e Curitiba de 400 Km. Escreva um algoritmo que calcule
iterativamente o tempo necess�rio para os maquinistas pararem as locomotivas antes que uma
colis�o aconte�a. O algoritmo deve calcular tamb�m a dist�ncia que as locomotivas devem
percorrer para que a colis�o aconte�a.
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
