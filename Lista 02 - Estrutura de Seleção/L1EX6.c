#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float n1, n2, n3, n4, media;
	
	printf("Digite 4 notas: ");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4)/4;
	
	if (media >= 7)
	{
		printf("A media do aluno: %.2f. O aluno esta APROVADO", media);
	}
	else
	{
		printf("A media do aluno: %.2f. O aluno esta REPROVADO", media);
	}
	
	return 0;
}
