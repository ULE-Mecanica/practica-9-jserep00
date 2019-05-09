#include <stdio.h>
#include <stdlib.h>

void rellena (int *matriz, int n);
void traspuesta (int *matriz, int n);
void pinta (int *matriz, int n);

int main () {
	int *m, n;
	printf ("Escribe el numero de filas y columnas de la matriz cuadrada: ");
	scanf("%d", &n);
	m=(int*)malloc(n*n*sizeof(int));
	rellena (m, n);
	traspuesta (m, n);
	pinta (m, n);
	return 0;
}

void rellena (int *matriz, int n) {
	int i, j;
	printf ("Rellena la matriz: \n");
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			scanf ("%d", &*(matriz+i*n+j));
		}
		printf ("\n");
	}
}

void traspuesta (int *matriz, int n) {
	int i, j, aux=0;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			aux=*(matriz+i*n+j);
			*(matriz+i*n+j)=*(matriz+j*n+i);
			*(matriz+j*n+i)=aux;
		}
		printf ("\n");
	}	
}

void pinta (int *matriz, int n) {
	int i, j;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			printf ("%d\t", matriz[i*n+j]);
		}
		printf ("\n");
	}
}
