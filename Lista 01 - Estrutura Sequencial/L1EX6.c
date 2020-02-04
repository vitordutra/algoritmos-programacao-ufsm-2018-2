#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota1, nota2, mediaponderada;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	mediaponderada = (2*nota1 + 3*nota2)/(5);
	
	printf("A media ponderada e: %.2f", mediaponderada);
		
	return 0;
}
