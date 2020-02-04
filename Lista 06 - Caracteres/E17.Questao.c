#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 51

/*
17) Considere uma string composta por v�rias subsequencias, por exemplo,
cccaaaabbbbxdddddddddaaannn. A menor subsequencia � a da letra x, com apenas um
elemento; a maior subsequencia � a da letra d, com 9 elementos. Fa�a um algoritmo para ler uma
string e mostrar qual � a letra que ocorre na maior subsequencia e o tamanho desta.
Ex.: Entrada: aaabbbbaa; Sa�da: maior b, tamanho 4.
*/

int main() {
	setlocale(LC_ALL,"portuguese");
    char cmaior, cmenor;
    char v[N];
    int i;
    int contMaior = 1, maior = 1;
    
    printf("\nDigite a string: ");
    scanf("%s", v);
    for (i = 0; v[i] != '\0'; i++) {
        if (v[i] == v[i + 1]) {
            contMaior++;
        } else {
            contMaior = 1;
        }
        if (contMaior > maior) {
            maior = contMaior;
            cmaior = v[i];
        }
    }
    printf("\n Maior: %c, tamanho %d;", cmaior, maior);
    
    return 0;
	
	return 0;
}
