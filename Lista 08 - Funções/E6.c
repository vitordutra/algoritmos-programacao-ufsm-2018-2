#include <stdio.h>
#include <stdlib.h>

/*
6) Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa
idade expressa em dias.
*/

int main(int argc, char *argv[]) 
{
	int idadeDias(int anos, int meses, int dias);
	
	int idade_dias = idadeDias(24, 4, 7);
	
	printf("%d", idade_dias);
	
	return 0;
}

int idadeDias(int anos, int meses, int dias)
{
	int anos_para_dias, meses_para_dias, total_dias;
	
	anos_para_dias = anos*365;
	meses_para_dias = meses*12;
	total_dias = anos_para_dias + meses_para_dias + dias;
	
	return total_dias;
}
