#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define n 50

/*
17) Considere uma string composta por várias subsequencias, por exemplo,
cccaaaabbbbxdddddddddaaannn. A menor subsequencia é a da letra x, com apenas um
elemento; a maior subsequencia é a da letra d, com 9 elementos. Faça um algoritmo para ler uma
string e mostrar qual é a letra que ocorre na maior subsequencia e o tamanho desta.
Ex.: Entrada: aaabbbbaa; Saída: maior b, tamanho 4.
*/

int main()
{
    setlocale(LC_ALL,"portuguese");

    char cmaior, cmenor;
    char v[n];
    int maior = 1, menor = n, i, temp = 1;

    printf("\nDigite a string: ");
    fgets(v, n, stdin);
    v[strlen(v)-1] = '\0';

    cmaior = v[0];

    for (i = 0; i < strlen(v); i++)
    {
        if (v[i] == v[i+1])
        {
            temp++;
        }
        else
        {
            if (temp > maior)
            {
                maior = temp;
                cmaior = v[i];
            }

            if (temp < menor)
            {
                menor = temp;
                cmenor = v[i];
            }

            temp = 1;
        }
    }

    printf("\nMaior: %c, tamanho %d; Menor: %c, tamanho %d\n", cmaior, maior, cmenor, menor);

    return EXIT_SUCCESS;
}
