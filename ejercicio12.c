#include <stdio.h>
#include <stdlib.h>

int primo (int *vector, int n);
void pinta (int *vector, int n);
void rellena (int *vector,int k, int num);

int main () {
	int *v, n;
	printf ("Introduzca el numero: ");
	scanf ("%d", &n);
	v=(int*)malloc(n*sizeof(int));
	primo(v, n);
	pinta (v, n);
	return 0;
}

int primo (int *vector, int n) {
	int num=1, i, cont=1, k, a=0;
	while (cont<=n) {
		for (i=1; i<=num; i++) {
			if (num%i==0) {
			a++;
			}
		}
		if (a==2) {
			rellenar (vector, k, num);
			cont++;
			k++;
		}
		num++;
	}
	return 1;
}

void rellena (int *vector, int k, int num) {
	*(vector+k)=num;
}

void pinta (int *vector, int n) {
	int i;
	for (i=0; i<n; i++) {
		printf ("%d", *(vector+i));
	}
}
