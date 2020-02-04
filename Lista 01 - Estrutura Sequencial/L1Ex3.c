#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, n3, m;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
	printf("Digite a nota 3: ");
	scanf("%f", &n3);
	
	m = (n1+n2+n3)/3;
	
	printf("Media = %.2f", m);
		
	return 0;
}
