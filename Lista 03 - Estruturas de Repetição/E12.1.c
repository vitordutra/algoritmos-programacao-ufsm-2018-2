#include <stdio.h>
#include <stdlib.h>

/*
12) Escreva um algoritmo que receba n�meros do usu�rio enquanto eles forem positivos e ao fim
o algoritmo deve imprimir a m�dia dos n�meros digitados. [vetores?]
*/

int main() 
{
	int qtnotas = 0;
	float nota, media, somanotas = 0;
	
	while (nota >= 0)
	{
		printf("Digite uma nota: (Se a nota for negativa o algoritmo para)\n");
		scanf("%f", &nota);
		if (nota <= 0)
		{
			break; // eu quero parar o algoritmo na �ltima m�dia calculada, e n�o computar o numero negativo no c�lculo da minha media
		}
		else
		{
			qtnotas++;
			somanotas = somanotas + nota;
			media = somanotas/qtnotas;
		}
	}
	
	printf("A media das notas: %f", media);
	
	return 0;
}
