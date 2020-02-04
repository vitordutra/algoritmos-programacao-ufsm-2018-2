#include <stdio.h>
#include <stdlib.h>

/*
5) Criar uma função que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em
ordem crescente.
*/

int main(int argc, char *argv[]) 
{
	void swap(int n1, int n2);
	int sort(int n1, int n2, int n3);
	
	int values = sort(58, 1, 32);
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("(p + %d): %d\n", i, values);
	}
	return 0;
}

void swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

int sort(int n1, int n2, int n3)
{

//	static int values[3];
//	values[0] = n1;
//	values[1] = n2;
//	values[3] = n3;
//	
//	if (values[0] > values[2])
//		swap(values[0], values[2]);
//	if (values[0] > values[1])
//		swap(values[0], values[1]);
//	if (values[1] > values[2])
//		swap(values[1], values[2]);
	if (n1 > n3)
		swap(n1, n3);
	if (n1 > n2)
		swap(n1, n2);
	if (n2 > n3)
		swap(n2, n3);
	return values;
}
