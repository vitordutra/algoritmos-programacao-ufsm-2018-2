#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 30) A função de Achermann é definida recursivamente nos números não negativos como segue:

      A(m, n) = n + 1 se m = 0
              = A(m - 1, 1) se m > 0 e n = 0
              = A(m - 1, A(m, n - 1)) se m > 0 e n > 0
 */

int A(int m, int n) {
	if(m < 0 || n < 0) return -1;
	if(m == 0) return n + 1;
	if(m > 0 && n == 0) return A(m - 1, 1);
	if(m > 0 && n > 0) return A(m - 1, A(m, n - 1));
}

int main(int argc, char *argv[]) {
	
	return 0;
}
