#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rellena (int *matriz);
void pinta (int *matriz);
int main () {
	int *matriz;
	matriz=(int*)malloc(100*sizeof(int));
	rellena (matriz);
	pinta (matriz);
	return 0;
}

void rellena (int *matriz) {
	int i, j, k=1;
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			matriz[i*10+j]=k;
			k+=+1;
		}
		printf ("\n");
	} 
}

void pinta (int *matriz) {
	int i, j;
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			printf ("%d\t", matriz[i*10+j]);
		}
		printf("\n");
	}
}
