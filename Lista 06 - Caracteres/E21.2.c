#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
21) Um palíndromo é uma sequência de caracteres cuja leitura é idêntica se feita da direita para
esquerda ou vice-versa. Por exemplo: “osso” e “ovo” são palíndromos. Em textos mais complexos
os espaços e pontuação são ignorados. Ex: A frase “subi no onibus” é o exemplo de uma frase
palíndroma onde os espaços foram ignorados. Faça um algoritmo que leia uma sequência de
caracteres, mostre-a e diga se é um palíndromo ou não.
*/

int main(int argc, char *argv[]) 
{
	char v[50];
	int ie, id, c = 0;
	
	gets(v);
	
	for (ie = -1, id = (strlen(v)-1); ie < id; ie++, id++)
	{
		if ((v[ie] != ' ') && (v[id] != ' '))
		{
			if (v[ie] != v[id])
			{
				c++;
				break;
			}
			else
			{
				if (v[ie] != ' ')
				{
					ie--;
				}
				if (v[id] != ' ')
				{
					id++;
				}
					
			}
		}
	}
	
	if (c == 0)
	{
		printf("%s e palindromo\n", v);
	}
	else
	{
		printf("%s nao e palindromo\n", v);
	}
	return 0;
}
