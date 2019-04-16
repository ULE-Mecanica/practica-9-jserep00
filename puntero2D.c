#include <stdio.h>
#include <stdlib.h>

void rellena (int*matriz, int filas, int columnas);
void pinta (int*matriz, int filas, int columnas);

int main () {
	int filas, columnas, *matriz;
	printf ("Numero de filas: ");
	scanf ("%d",&filas);
	printf ("Numero de columnas: ");
	scanf ("%d",&columnas);
	matriz = (int*) malloc (filas*columnas*sizeof(int));
	rellena (matriz,filas,columnas);
	pinta (matriz, filas, columnas);
return 0;
}

void rellena (int*matriz, int filas, int columnas){
	int i,j;
	for (i=0; i<filas; i++){
		for (j=0; j<columnas; j++) {
			matriz [i*filas+j] = rand() %10;
		}
	}
}

void pinta (int*matriz, int filas, int columnas){
	int i,j;
	for (i=0;i<filas; i++) {
		for (j=0;j<columnas; j++) {
			printf ("%d ", matriz [i*filas+j]);
		}
		printf ("\n");
	}
}
