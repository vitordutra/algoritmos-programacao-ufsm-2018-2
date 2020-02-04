#include <stdio.h>
#include <stdlib.h>

/*
22) A convers�o de graus Farenheit para cent�grados � obtida por C = 5/9(F � 32). Fa�a um
algoritmo que calcule e escreva uma tabela de graus cent�grados em fun��o de graus Farenheit,
variando um a um de 50 a 150 graus Farenheit.
*/

int main() 
{
	float Celsius = 1, Fahrenheit = 50;
	
	for (Fahrenheit; Fahrenheit <= 150; Fahrenheit = Fahrenheit + 1)
	{
		Celsius = (5.0/9.0)*(Fahrenheit - 32.0);
		printf("\nFahrenheit: %f \tCelsius: %f", Fahrenheit, Celsius);
	}
	return 0;
}
