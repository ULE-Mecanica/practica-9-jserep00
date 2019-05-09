#include <stdio.h>
#include <stdlib.h>

int calculamaximo (int *v, int tam);

int main () {
	int *v;
	int i, tam, resultado=0;
	printf ("Introduce el numero de valores: ");
	scanf ("%d", &tam);
	v=(int*)malloc(tam*sizeof(int));
	printf ("Introduce los valores separados por un intro: \n");
	for (i=0; i<=tam-1; i++) {
		scanf ("%d", &v[i]);
	}
	resultado=calculamaximo (v, tam);
	printf ("La maximo es: %d", resultado);
return 0;
free(v);
}
int calculamaximo (int *v, int tam) {
	int i, max=0;
	for (i=1; i<=tam; i++) {
		if (v[i]>max) {
			max=v[i];
		}
	}
	return max;
}

