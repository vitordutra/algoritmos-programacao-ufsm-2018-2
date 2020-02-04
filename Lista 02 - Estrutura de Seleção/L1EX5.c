#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	
	scanf("%d", &num);
	
	if (num > 0)
	{
		printf("O numero %d eh positivo", num);
	}
	else if (num == 0)
	{
		printf("O numero %d eh nulo", num);
	}
	else
	{
		printf("O numero %d eh negativo", num);
	}
	
	return 0;
}
