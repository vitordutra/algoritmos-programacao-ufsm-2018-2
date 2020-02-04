#include <stdio.h>
#include <stdlib.h>

/*
11) Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo (“M” para masculino e “F”
para feminino) de uma pessoa e retorna o seu peso ideal. Para homens, calcular o peso ideal
usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.
*/

float pesoIdeal(float alt, char sexo)
{
	float peso_ideal;
	
	if ((sexo == 'm') || (sexo == 'M'))
	{
		peso_ideal = 72.7*alt - 58;
	}
	
	if ((sexo == 'f') || (sexo == 'F'))
	{
		peso_ideal = 62.1*alt - 44.7;
	}
	
	printf("O peso ideal desta pessoa eh: %f\n", peso_ideal);
	
	return peso_ideal;
}

int main(int argc, char *argv[]) 
{
	pesoIdeal(1.7, 'f');
	pesoIdeal(1.7, 'F');
	pesoIdeal(1.7, 'M');
	pesoIdeal(1.7, 'm');
	return 0;
}
