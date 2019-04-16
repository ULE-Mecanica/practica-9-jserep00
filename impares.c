#include <stdio.h>
#include <stdlib.h>

void pinta (int *matriz, int filas, int columnas);
void rellena (int *matriz, int filas, int columnas);
int main () {
	int *matriz, filas, columnas;
	printf ("Introduce el numero de filas: ");
	scanf ("%d", &filas);
	printf ("introduce el numero de columnas: ");
	scanf ("%d", &columnas);
	matriz = (int*) malloc (filas*columnas*sizeof(int));
	rellena (matriz, filas, columnas);
	pinta (matriz, filas, columnas);
return 0;
}

void rellena (int *matriz, int filas, int columnas) {
	int i=0, j=0, par=1;
	for (i=0; i<filas; i++) {
		for (j=0;j<columnas; j++) {
			matriz[i*filas+j]=par;
			par = par+2;
		}
	}
}

void pinta (int *matriz, int filas, int columnas) {
	int i,j;
	for (i=0; i<filas; i++) {
		for (j=0; j<columnas; j++) {
			printf ("%d\t", matriz [i*filas+j]);
		}
		printf ("\n");
	}
}

