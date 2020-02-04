#include <stdio.h>
#include <stdlib.h>

/*

*/
int retNaturaisSig(int n) {
	if(n < 0) {
		return retNaturais(n * -1);
	}
	return retNaturais(n);
}

int main(int argc, char *argv[]) {
	
	printf("%d", retNaturaisSig(10));
	
	return 0;
}
