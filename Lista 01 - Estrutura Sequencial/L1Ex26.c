#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ano_nascimento, ano_atual;
	int idadeanos, idademeses, idadesemanas, idadedias;
	
	printf("Digite o ano de nascimento: ");
	scanf("%i", &ano_nascimento);
	
	printf("Digite o ano atual: ");
	scanf("%i", &ano_atual);
	
	idadeanos = (ano_atual - ano_nascimento);
	idademeses = (idadeanos * 12);
	idadedias = (idadeanos * 365);
	idadesemanas = idadeanos * 52;
	
	printf("A idade da pessoa em anos, meses, semanas e dias e, respectivamente: %i, %i, %i, %i", 
		idadeanos, idademeses, idadesemanas, idadedias);
	
	
	return 0;
}
