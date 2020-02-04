#include <stdio.h>
#include <stdlib.h>

/*
14) Crie uma estrutura chamada Cadastro que tenha os campo Nome, Ender, Telefone e Idade,
onde Ender é do tipo Endereco conforme o exercício anterior. Declare uma variável DadosAluno
como sendo do tipo Cadastro.
*/

typedef struct Endereco{
	char rua[20];
	int numero;
	char bairro[20];
}end;

typedef struct Cadastro{
	char nome[20];
	end ender;
	char telefone[10];
	int idade;
}cad;

int main(int argc, char *argv[]) {
	cad DadosAluno;
	
	DadosAluno.ender.bairro; //Assim que eu chamo uma estrutura dentro da outra.
	return 0;
}
