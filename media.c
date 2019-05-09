#include <stdio.h>
#include <stdlib.h>

int media (int*v, int tam);
int main () {
	int *v;
	int i, tam, resultado;
	printf ("Introduce el numero de valores: ");
	scanf ("%d", &tam);
	v=(int*)malloc(tam*sizeof(int));
	printf ("Introduce los valores separados por un intro: \n",tam);
	for (i=0; i<=tam-1; i++) {
		scanf ("%d", &v+i);
	}
	resultado=media (v, tam);
	printf ("La media es: %d", resultado);
return 0;
}

int media (int*v, int tam) {
	int media=0;
	int i;
	for (i=0; i<=tam; i++) {
		media+= (*(v+i));
	}
	media=media/tam;
	return media;
}
