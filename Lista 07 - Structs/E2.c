#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2) Crie uma estrutura para armazenar as configurações de um computador. Faça um algoritmo
que armazene 5 estruturas desse tipo.
*/

typedef struct compconfig
{
	float tela;
	int hd;
	int ram;
	char pnome[5];
	float pclock;
} compconfig;

int main(int argc, char *argv[]) 
{
	compconfig pc1, pc2, pc3, pc4, pc5;
	
	strcpy(pc1.pnome, "i7");
	pc1.tela = 15.6;
	pc1.hd = 500;
	pc1.pclock = 2.4;
	pc1.ram = 8;
	
	printf("%s\n%f\n%i\n%f\n%i\n", pc1.pnome, pc1.tela, pc1.hd, pc1.pclock, pc1.ram);
	
	
	return 0;
}
