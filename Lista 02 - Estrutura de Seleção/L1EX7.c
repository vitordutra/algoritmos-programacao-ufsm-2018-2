#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	
	scanf("%d", &num);
	
	if (num > 20)
	{
		printf("O numero %d eh maior que 20", num);
	}
	else if (num == 20)
	{
		printf("O numero %d eh igual a 20", num);
	}
	else
	{
		printf("O numero %d eh menor que 20", num);
	}
	
	return 0;
}
