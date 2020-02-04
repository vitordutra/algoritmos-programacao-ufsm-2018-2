#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n;
	scanf("%d", &n);
	
	if (n > 20)
	{
		printf("%d", n);
	}
	else
	{
		printf("n <= 20");
	}
	return 0;
}
