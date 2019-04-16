#include <stdio.h>
#include <stdlib.h>

void pinta (int*matriz, int filas, int columnas);
int dameprimo (int actual);
void rellena (int*matriz, int filas, int columnas);
int esprimo (int num);
int main () {
	int *v, filas, columnas;
	printf ("Introduce el numero de filas: ");
	scanf ("%d", &filas);
	printf ("introduce el numero de columnas: ");
	scanf ("%d", &columnas);
	v = (int*) malloc (filas*columnas*sizeof(int));
	rellena (v, filas, columnas);
	pinta (v, filas, columnas);
return 0;
}

int esprimo (int num) {
	int n, i;
	for (i=num-1; i>=2; i--) {
		if (num%i == 0){
			return 0;
		}
	}
return 1;
}

void rellena (int *matriz, int filas, int columnas) {
	int i, j, actual=1;
	for (i=0; i<filas; i++) {
		for (j=0; j<columnas; j++) {
			actual = dameprimo (actual);
			matriz [i*filas+j] = actual;
		}		
	}
}

int dameprimo (int actual) {
	actual++;	
	while (esprimo (actual)==0) {
		actual++;
	}
return actual;
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

