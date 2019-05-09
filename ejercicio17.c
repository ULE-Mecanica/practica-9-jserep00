#include <stdio.h>
#include <stdlib.h>

void rellena (int *matriz1, int *matriz2,  int n);
void multiplica (int *matriz1, int *matriz2, int *matriz3, int n);
void pinta (int *matriz3, int n);

int main () {
	int *m1, *m2, *m3, n;
	printf ("Escriba el numero de filas y columnas de la matriz cuadrada: ");
	scanf ("%d", &n);
	m1=(int*)malloc(n*n*sizeof(int));
	m2=(int*)malloc(n*n*sizeof(int));
	m3=(int*)malloc(n*n*sizeof(int));
	rellena (m1, m2, n);
	multiplica (m1, m2, m3, n);
	pinta (m3, n);
	return 0;
}

void rellena (int*matriz1, int *matriz2, int n) {
	int i, j, m;
	printf ("Rellene la primera matriz: \n");
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			scanf ("%d", &*(matriz1+i*n+j));
		}
		printf ("\n");
	}
	printf ("\n Rellene la segunda matriz: \n");
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			scanf ("%d", &*(matriz2+i*n+j));
		}
		printf ("\n");
	}
}

void multiplica (int *matriz1, int *matriz2, int *matriz3, int n) {
	int i, j, k;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			*(matriz3+i*n+j)=0;
			for (k=0; k<n; k++) {
				*(matriz3+i*n+j)+=(*(matriz1+i*n+k))*(*(matriz2+k*n+j));
			}
		}
		printf ("\n");
	}
}

void pinta (int *matriz3, int n) {
	int i, j;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			printf ("%d\t", *(matriz3+i*n+j));
		}
		printf ("\n");
	}
}
