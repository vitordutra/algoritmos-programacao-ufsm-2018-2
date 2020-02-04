#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 29) Implemente, usando a linguagem C, a função h definida recursivamente por:

    h(m,n) = m + 1 se n = 1
    	   = n - 1 se m = 1
           = h(m, n - 1) + h(m - 1, n) se m > 1 e n > 1
*/

int h(int m, int n) {
	if(m < 1 || n < 1) return -1;
	if(n == 1) return m + 1;
	if(m == 1) return n - 1;
	return h(m, n - 1) + h(m - 1, n);
}

int main(int argc, char *argv[]) {
	
	return 0;
}
