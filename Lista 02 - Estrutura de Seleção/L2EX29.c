#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
	setlocale(LC_ALL, "Portuguese");

	int opc;
	float val, val_cor;
	
	printf("Digite o valor do investimento: ");
	scanf("%f", &val);
	
	printf("Digite o tipo de investimento\n1 - Poupan�a\n2 - Fundos de Renda Fixa\n");
	scanf("%i", &opc);
	
	if (opc == 1)
	{
		val_cor = val + val*0.03;
	}
	else if (opc == 2)
	{
		val_cor = val + val*0.04;
	}
	else
	{
		printf("Op��o inv�lida\n");
	}
	
	printf("O valor corrigido ap�s 1 m�s ser�: %.2f", val_cor);
	
	return 0;
}
