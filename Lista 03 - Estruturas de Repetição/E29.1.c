#include <stdio.h>
#include <stdlib.h>

/* 
29) Faça um algoritmo que leia um conjunto de informações (identificador, sexo, idade, peso e
altura) dos atletas que participaram de uma olimpíada, e informar:
- O atleta do sexo masculino mais alto;
- A atleta do sexo feminino mais pesada;
- A média de idade dos atletas.
Deverão ser lidos dados dos atletas até que seja digitado o identificador -1 para um atleta.
*/

int main(int argc, char *argv[]) 
{
	int id, sexo, n, idade, id_maior_altura, id_maior_peso;
	float peso, altura, soma, media_idade, maior_altura = 0.0, maior_peso = 0.0;
	
	while (id != -1)
	{
		printf("Digite o id do atleta: ");
		scanf("%i", &id);
		
		if (id == -1)
		{
			break;
		}
		
		printf("Digite o sexo do atleta: (0 - Masculino / 1 - Feminino): ");
		scanf("%i", &sexo);
		
		printf("Digite a idade do atleta: ");
		scanf("%i", &idade);
		
		soma += idade;
		n++;
				
		printf("Digite o peso do atleta: ");
		scanf("%f", &peso);
		
		printf("Digite a altura do atleta: ");
		scanf("%f", &altura);
		
		if ((sexo == 0) && (altura > maior_altura))
		{
			maior_altura = altura;
			id_maior_altura = id;
		}
		
		if ((sexo == 1) && (peso > maior_peso))
		{
			maior_peso = peso;
			id_maior_peso = id;
		}
	}
	
	media_idade = soma/n;
	
	printf("A media de idade dos atletas: %f\n", media_idade);
	printf("O atleta masculino #%i tem a maior altura, com %.2f m\n",  id_maior_altura, maior_altura);
	printf("A atleta feminina #%i tem o maior peso, com %.2f kg\n", id_maior_peso, maior_peso);
	
	return 0;
}
