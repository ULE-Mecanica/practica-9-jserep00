#include <stdio.h>
#include <stdlib.h>
int minimo (int* v, int tam);
int main () {
	int * v1, n, i, m;
	printf ("numero: ");
	scanf ("%d", &n);
	v1 = (int *) malloc (n*sizeof (int));
	for (i=0;i<n; i++){
		scanf("%d", &v1[i]);
	}
	m=minimo (v1, n);
	printf ("El numero mas pequeño es: %d\n", m);
return 0;
}

int minimo(int*v, int tam){
	int i, min=v[0];
	for (i=0; i<tam; i++){
		if (v[i] < min) {
			min = v[i];
		}	
	}
return min;
}
