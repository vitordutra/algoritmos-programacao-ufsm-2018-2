#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("A nota semestral do aluno é: %f\n", media);
	
	if (media >= 7)
	{
		printf("Aluno APROVADO");
	}
	else if (media <= 3)
	{
		printf("Aluno REPROVADO");
	}
	else
	{
		printf("Aluno EM EXAME");
	}
	
	return 0;
}
