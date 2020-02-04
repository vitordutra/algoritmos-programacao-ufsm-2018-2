#include <stdio.h>
#include <stdlib.h>

/*
36) Um cinema possui capacidade de 5 lugares e está sempre com ocupação total. Certo dia,
cada espectador respondeu a um questionário, no qual constava:
- Idade;
- Opinião em relação ao filme, segundo as seguintes notas:
Nota Significado
5 Ótimo
4 Bom
3 Regular
2 Ruim
1 Péssimo
Elabore um algoritmo que, lendo estes dados calcule e imprima:
- A quantidade de respostas “Ótimo”.
- A diferença porcentual entre as respostas “Bom” e “Regular”;
- A média de idade das pessoas que responderam “Ruim”;
- A porcentagem de respostas “Péssimo” e a maior idade que utilizou esta opção;
- A diferença de idade entre a maior idade que respondeu “Ótimo” e a maior idade que
respondeu “Ruim”.
*/

int main(int argc, char *argv[]) 
{
	float idade, opiniao, n, soma_idade = 0, soma_idade_ruim = 0;
	float contador_otimo = 0, contador_bom = 0, contador_regular = 0, contador_ruim = 0, contador_pessimo = 0;
	float maior_idade_pessimo = 0, maior_idade_otimo = 0, maior_idade_ruim = 0;
	float dif_maior_idade_otimo_ruim;
	float media_idade_ruim;
	float pct_pessimo, pct_regular;
	
	for (n = 0; n < 5; n++)
	{
		printf("Digite a idade: ");
		scanf("%f", &idade);
		
		printf("Qual a sua opiniao sobre o filme? \n");
		printf("5\tOtimo\n");
		printf("4\tBom\n");
		printf("3\tRegular\n");
		printf("2\tRuim\n");
		printf("1\tPessimo\n");
		scanf("%f", &opiniao);
		
		if (opiniao == 5)
		{
			contador_otimo++;
			if (maior_idade_otimo < idade)
			{
				maior_idade_otimo = idade;
			}
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
			soma_idade_ruim += idade;
			if (maior_idade_ruim < idade)
			{
				maior_idade_ruim = idade;
			}
		}
		if (opiniao == 1)
		{
			contador_pessimo++;
			if (maior_idade_pessimo < idade)
			{
				maior_idade_pessimo = idade;
			}
		}
		
	}
	
	printf("A quantidade de pessoas que acharam o cinema otimo: %f\n", contador_otimo);
	
	pct_regular = ((contador_bom - contador_regular)/10)*100;
	printf("A diferenca percentual entre os votos Bom e Regular e: %f\n", pct_regular);
	
	//Media de idade das pessoas que responderam "ruim"
	
	media_idade_ruim = soma_idade_ruim/contador_ruim;
	
	printf("A media de idade das pessoas que responderam ruim: %f\n", media_idade_ruim);
	
	pct_pessimo = (contador_pessimo/10)*100;
	
	printf("A pct de pessoas que responderam pessimo: %f\n", pct_pessimo);
	printf("A maior idade da pessoa que respondeu pessimo e: %f\n", maior_idade_pessimo);
	
	dif_maior_idade_otimo_ruim = maior_idade_otimo - maior_idade_ruim;
	
	printf("A diferença de idade entre a maior idade que respondeu “Ótimo” e a maior idade que respondeu “Ruim”: %f anos", dif_maior_idade_otimo_ruim);
	
	
	
	return 0;
}
