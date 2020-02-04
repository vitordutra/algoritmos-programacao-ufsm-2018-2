#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int ini, fim, dur, adur, dur2;
	
	printf("Digite a hora de inicio (0 a 24): ");
	scanf("%i", &ini);
	
	printf("Digite a hora do fim: (0 a 24): ");
	scanf("%i", &fim);
	
	dur = fim - ini;
	
	adur = abs(dur);
	
	dur2 = 24 - (adur);
	
	if (dur > 0)
	{
		printf("O jogo durou %i horas", adur);
	}
	else if (dur < 0)
	{
		printf("O jogo durou %i horas", dur2);
	}
	else
	{
		printf("O jogo durou 24 horas");
	}
	
	return 0;
}
