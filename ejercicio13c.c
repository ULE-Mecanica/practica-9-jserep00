#include <stdio.h>
#include <stdlib.h>

void rellena (int *matriz);
void pinta (int *matriz);

int main () {
	int *matriz;
	matriz=(int*)malloc(6*6*sizeof(int));
	rellena (matriz);
	pinta (matriz);
	return 0;
}

void rellena (int *matriz) {
	int i, j;
	for (i=0; i<6; i++) {
		for (j=0; j<6; j++) {
			if (i == j) {
				matriz[i*6+j]=1;
			}
			else {
				matriz[i*6+j]=0;
			}
		}
		printf ("\n");
	} 
}

void pinta (int *matriz) {
	int i, j;
	for (i=0; i<6; i++) {
		for (j=0; j<6; j++) {
			printf ("%d\t", matriz[i*6+j]);
		}
		printf("\n");
	}
}
