#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float val, desc, val_c_desc;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &val);
	
	if ((val >= 0) && (val < 30))
	{
		desc = 0;
	}
	else if ((val >= 30) && (val <= 100))
	{
		desc = val*0.1;
	}
	else if (val < 0)
	{
		printf("PREÇO INVÁLIDO\n");
	}
	else
	{
		desc = val*0.15;
	}
	
	val_c_desc = val - desc;
	
	printf("O preço atual é: %.2f\n", val);
	printf("O valor do desconto é: %.2f\n", desc);
	printf("O novo preço é: %.2f", val_c_desc);
	
	return 0;
}
