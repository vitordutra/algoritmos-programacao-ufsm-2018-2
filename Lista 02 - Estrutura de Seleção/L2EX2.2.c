#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n1, n2, i;
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	if (n1 < n2)
	{
		i = n1;
	}
	else
	{
		i = n2;
	}
	
	printf("O menor numero: %d", n1);
	
	return 0;
}
