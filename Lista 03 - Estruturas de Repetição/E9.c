#include <stdio.h>
#include <stdlib.h>

/* 
9) Elabore um algoritmo que verifique e mostre os números entre 1000 e 2000(inclusive) que,
quando divididos por 11, produzam resto igual a 5.
*/

int main() 
{
	int n = 0;
	
	for (n == 1000; n <= 2000; n++)
	{
		if (n % 11 == 5)
		{
			printf("%d\n", n);
		}
	}
	return 0;
}
