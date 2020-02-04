#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int opc;
	float V, prec_l, val, desc, val_pago;
	
	printf("Digite a opção desejada:\n 1 - Gasolina \n 2 - Álcool \n");
	scanf("%i", &opc);
	
	if (opc == 1)
	{
		prec_l = 2.9;
		printf("O preço do litro é R$ 2,90 para a gasolina\n");
		printf("Digite a quantidade de litros de gasolina desejada: ");
		scanf("%f", &V);
		
		val = prec_l * V;
		
		if (V <= 20)
		{
			desc = val*0.03;
		}
		else
		{
			desc = val*0.05;
		}
	}
	else if (opc == 2)
	{
		prec_l = 2.7;
		printf("O preço do litro é R$ 2,70 para o álcool\n");
		printf("Digite a quantidade de litros de álcool desejada: ");
		scanf("%f", &V);
		
		val = prec_l * V;
		
		if (V <= 20)
		{
			desc = val*0.04;
		}
		else
		{
			desc = val*0.06;
		}
	}
	else
	{
		printf("OPÇÃO INVÁLIDA\n");
	}
	
	val_pago = val - desc;
	
	printf("O valor a ser pago pelo cliente: %.2f", val_pago);
	
	return 0;
}
