#include <stdio.h>

int main()
{
	int canal = 1;
	while ((canal != 2) || (canal != 4) || (canal != 5) || (canal != 9))
	{
		printf("Digite o Canal: ");
		scanf("%i", &canal);
	}
	return 0;
}
