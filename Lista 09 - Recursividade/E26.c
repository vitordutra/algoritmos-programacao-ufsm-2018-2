#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ex26 --> Desenvolva algoritmos recursivos para cada um dos seguintes problemas:
a)Impressão de um número natural em base binaria
b)Multiplicação de dois números naturais através de somas consecutivas.
c)Inversão de uma string.
d)Gerador da sequencia:
   (a) F(1)=1
   (b) F(2)=2
   (c) F(n)= 2*F(n-1)+3*F(n-2) <= fórmula Geral Usando a formula podemos identificar que F(3)=2*F(2)+3*F(1) F(3)=4+3=7
(e)Verificar se uma palavra é palíndromo
(f)Busca sequencial em um veto desordenado que retorna a posição da primeira ocorrência de um elemento procurado
usando uma estratégia similar a da busca binaria. Dica: Se não é o elemento do meio, procure dos dois lados e retorne
o menor dos índices encontrados. Se for o elemento do meio, continue a busca apenas do lado esquerdo, retornando a
posição de lá se encontrar e o meio senão encontrar*/

/* a) Impressão de um número natural em base binaria*/
void binario(int n) {
	int nBits = 1;
	int m = n;
	while(m > 1) {   /* Calcula quantidade de bits do numero n*/
		nBits++;
		m /= 2;
	}

	int * interna(int n, int i, int * vet) {
		if(n < 2) {
			vet[i] = n;
			return vet;
		}
		vet[i] = (n % 2);
		return interna(n / 2, i + 1, vet);
	}

	int i = 0;
	int v[nBits];
	int * vetor = interna(n, i, v);

	int j;
	for(j = nBits - 1; j >= 0; j--) {
		printf("%d",vetor[j]);
	}
}


/* b) Multiplicação de dois números naturais através de somas consecutivas.*/
int multSomas(int a, int b) {
	int interna(int a, int aux, int b) {
		if(a == 0 || b == 0) return 0;
		if(b == 1) return a;
		a += aux;
		interna(a, aux, b - 1);
	}
	return interna(a, a, b);

}

/* c) Inversão de uma string.*/
void inverteString(char * str) {
	char * interna(char * s, char * aux, int i, int tam) {
		if(tam == -1) {
			return aux;
		}
		aux[i] = s[tam];
		interna(s, aux, i + 1, tam - 1);
	}
	int t = strlen(str) - 1;
	char strAux[t + 1];
	printf("%s",interna(str, strAux, 0, t));
}

/* d) Gerador da sequencia:
   (a) F(1)=1
   (b) F(2)=2
   (c) F(n)= 2*F(n-1)+3*F(n-2) <= fórmula Geral Usando a formula podemos identificar que F(3)=2*F(2)+3*F(1) F(3)=4+3=7*/
int sequencia(int n) {
	if(n == 1) return 1;
	if(n == 2) return 2;
	return 2 * sequencia(n - 1) + 3 * sequencia(n - 2);
}

/* e) Verificar se uma palavra é palíndromo. */
int palindromo(char * str) {
	int interna(char * s, int i, int tam, int teste) {
		if(tam == -1) {
			if(teste) return 1;
			return teste;
		}
		if(s[i] != s[tam]) {
			teste++;
			return 0;
		}
		interna(s,i + 1, tam - 1, teste);
	}
	int t = strlen(str);
	interna(str, 0, t - 1, 0);
}

/* f) Busca sequencial em um vetor desordenado que retorna a posição da primeira ocorrência de um elemento procurado
usando uma estratégia similar a da busca binaria. Dica: Se não é o elemento do meio, procure dos dois lados e retorne
o menor dos índices encontrados. Se for o elemento do meio, continue a busca apenas do lado esquerdo, retornando a
posição de lá se encontrar e o meio senão encontrar */

int buscaSeq(char * v, char ele) {
	int interna(char * vet, char e, int m, int n) {
		int esquerda(char * vet, char e, int m, int i) {
			if(vet[i] == e)	return i;
			if(i == m - 1 && vet[i] != e)return -1;
			return esquerda(vet, e, m, i + 1);
		}
		int direita(char * vet, char e, int m, int i, int n) {
			if(vet[m + i] == e)	return m + i;
			if(m + i == n && vet[m + i] != e) return -1;
			return direita(vet, e, m, i + 1, n);
		}
		int i, esq, dir;
		if(vet[m] == e) {
			if(n == 1 || n == 2) return 0;
			i = 0;
			esq = esquerda(vet, e, m, i);
			if(esq == -1) return m;
			return esq;
		}
		i = 0;
		if(n == 1)	return -1;
		if(n == 2) return direita(vet, e, m, i, n);
		esq = esquerda(vet, e, m, i);
		i = 0;
		dir = direita(vet, e, m, i, n);
		if(esq == -1 && dir == -1) return -1;
		if(esq == -1 && dir != -1) return dir;
		if(dir == -1 && esq != -1) return esq;
		if(esq < dir) return esq;
		return dir;
	}

	int tam = strlen(v);
	int meio;
	if(tam == 1) {
		meio = 0;
	}
	if(tam >= 2) {
		if(tam % 2 == 0) meio = tam / 2 - 1;
		else meio = tam / 2;
	}
	return interna(v, ele, meio, tam);
}

int main(int argc, char *argv[]) {
	
	return 0;
}
