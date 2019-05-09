#include <stdio.h>
#include <stdlib.h>

void pinta (int*matriz, int n);
void damematriz (int *matriz, int n);

int main () {
	int *matriz=0, n;
	printf ("Siendo esta una matriz cuadrada nxn, da el valor de n: ");
	scanf ("%d", &n);
	matriz=(int*)malloc(n*n*sizeof(int));
	damematriz(matriz, n);
	pinta (matriz, n);
	return 0;
}

void damematriz (int *matriz, int n) {
	int  i, j;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			if (i==j) {
				matriz[i*n+j]=1;
			}
			else {
				matriz[i*n+j]=0;
			}
		}
		printf ("\n");
	}
}

void pinta (int*matriz, int n){
	int i,j;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			printf ("%d\t",matriz[i*n+j]);
		}
		printf("\n");
	}
}
