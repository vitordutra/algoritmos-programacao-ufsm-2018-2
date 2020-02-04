#include <stdio.h>
#include <stdlib.h>

/*
36) Um cinema possui capacidade de 10 lugares e está sempre com ocupação total. Certo dia,
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
- A diferença porcentual entre as respostas “Bom” e “Regular”;- A média de idade das pessoas que responderam “Ruim”;
- A porcentagem de respostas “Péssimo” e a maior idade que utilizou esta opção;
- A diferença de idade entre a maior idade que respondeu “Ótimo” e a maior idade que
respondeu “Ruim”.
*/

int main(int argc, char *argv[]) 
{
	int idade, opiniao, n;
	
	for (n = 0; n < 10; n++)
	{
		printf("Digite a idade: %i");
		scanf("%i", &idade);
		printf("Digite a sua opinião do filme: \n");
		printf("5\tOtimo\n");
		printf("4\tBom\n");
		printf("3\tRegular\n");
		printf("2\tRuim\n");
		printf("1\tPessimo\n");
	}
	return 0;
}
