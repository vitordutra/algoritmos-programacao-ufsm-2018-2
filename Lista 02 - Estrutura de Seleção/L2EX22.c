#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float comp, val;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &comp);
	
	if (comp <= 20)
	{
		val = comp*1.45;
		printf("O valor da venda: %.2f", val);
	}
	else
	{
		val = comp*1.3;
		printf("O valor da venda: %.2f", val);
	}
	return 0;
}
