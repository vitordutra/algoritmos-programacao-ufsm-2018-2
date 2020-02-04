#include <stdio.h>
#include <stdlib.h>

/*
36) Um cinema possui capacidade de 5 lugares e est� sempre com ocupa��o total. Certo dia,
cada espectador respondeu a um question�rio, no qual constava:
- Idade;
- Opini�o em rela��o ao filme, segundo as seguintes notas:
Nota Significado
5 �timo
4 Bom
3 Regular
2 Ruim
1 P�ssimo
Elabore um algoritmo que, lendo estes dados calcule e imprima:
- A quantidade de respostas ��timo�.
- A diferen�a porcentual entre as respostas �Bom� e �Regular�;
- A m�dia de idade das pessoas que responderam �Ruim�;
- A porcentagem de respostas �P�ssimo� e a maior idade que utilizou esta op��o;
- A diferen�a de idade entre a maior idade que respondeu ��timo� e a maior idade que
respondeu �Ruim�.
*/

int main(int argc, char *argv[]) 
{
	int idade, opiniao, n, soma_ruim;
	int contador_otimo, contador_bom, contador_regular, contador_ruim, contador_pessimo;
	int maior_idade_pessimo, maior_idade_otimo, maior_idade_ruim;
	float media_idade_ruim;
	
	
	for (n = 0; n < 10; n++)
	{
		printf("Digite a idade: ");
		scanf("%i", &idade);
		
		printf("Qual a sua opiniao sobre o filme? \n");
		printf("5\tOtimo\n");
		printf("4\tBom\n");
		printf("3\tRegular\n");
		printf("2\tRuim\n");
		printf("1\tPessimo\n");
		scanf("%i", &opiniao);
		
		if (opiniao == 5)
		{
			contador_otimo++;
		}
		if (opiniao == 4)
		{
			contador_bom++;
		}
		if (opiniao == 3)
		{
			contador_regular++;
		}
		if (opiniao == 2)
		{
			contador_ruim++;
		}
		if (opiniao == 1)
		{
			contador_pessimo++;
		}
		
	}
	
	printf("A quantidade de pessoas que acharam o cinema otimo: %i", contador_otimo);
	
	
	return 0;
}
