#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	
	scanf("%i", &num);
	
	if ((num % 3 == 0) && (num % 7 == 0))
	{
		printf("O numero e divisivel por 3 e 7 simultaneamente");
	}
	else
	{
		printf("O numero NAO e divisivel por 3 e 7 simultaneamente");
	}
	return 0;
}
