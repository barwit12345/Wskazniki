#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n;
	scanf ("%d",&n);
	float *tab=malloc(n*sizeof(float*));
	int i;
	for (i=0;i<n;i++) scanf ("%f",tab+i);
	int suma=0;
	for (i=0;i<n,i++) suma=suma + *(tab+i);
	printf ("%f",suma);
	return 0;
}
