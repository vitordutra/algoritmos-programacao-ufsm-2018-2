#include <stdio.h>
#include <stdlib.h>

/*
14) Implemente um algoritmo que receba uma string como parâmetro e substitua todas as letras
por suas sucessoras no alfabeto. Por exemplo, a string “Casa” seria alterada para “Dbtb”.
A letra z deve ser substituída pela letra a (e Z por A). Caracteres que não forem letras devem
permanecer inalterados.
*/

void shift_string (char* str)
{
	int i = 0;
	
	while (str[i] != 0)
	{
		if (str[i] == 'z') str[i] = 'a';
		else if (str[i] == 'Z') str[i] ='A';
		else if (str[i] >= 'a' && str[i] < 'z') str[i]++;
		else if (str[i] >= 'A' && str[i] < 'Z') str[i]++;
		i++;
	}
}

int main(int argc, char *argv[]) {
	
	return 0;
}
