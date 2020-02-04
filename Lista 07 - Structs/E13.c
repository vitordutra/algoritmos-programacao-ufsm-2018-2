#include <stdio.h>
#include <stdlib.h>

/*
13) Crie uma estrutura chamada Endereco que contenha os campos Rua, Numero e Bairro. Em
seguida declare uma variável do tipo Endereco.
*/

typedef struct endereco{
	char rua[20];
	int numero;
	char bairro[20];
}end;

int main() {
	end p;
	return 0;
}
