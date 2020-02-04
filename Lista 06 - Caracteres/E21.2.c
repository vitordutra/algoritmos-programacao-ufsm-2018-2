#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
21) Um pal�ndromo � uma sequ�ncia de caracteres cuja leitura � id�ntica se feita da direita para
esquerda ou vice-versa. Por exemplo: �osso� e �ovo� s�o pal�ndromos. Em textos mais complexos
os espa�os e pontua��o s�o ignorados. Ex: A frase �subi no onibus� � o exemplo de uma frase
pal�ndroma onde os espa�os foram ignorados. Fa�a um algoritmo que leia uma sequ�ncia de
caracteres, mostre-a e diga se � um pal�ndromo ou n�o.
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
