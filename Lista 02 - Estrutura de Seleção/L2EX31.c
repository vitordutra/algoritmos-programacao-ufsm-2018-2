#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int = opc;
	float V, prec_l, val, val_pago;
	
	printf("Digite a opção desejada:\n 1 - Álcool \n 2 - Gasolina \n");
	scanf("%i", &opc);
	
	if (opc == 1)
	{
		prec_l = 2.9;
		printf("O preço do litro é R$ 2,90 para a gasolina\n");
		printf("Digite a quantidade de litros de gasolina desejada: ");
		scanf("%f", &V);
		
		if (V <= 20)
		{
			
		}
	}
	
	return 0;
}
