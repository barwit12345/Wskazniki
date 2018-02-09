#include <stdlib.h>
#include <stdio.h>

int *funk (int *tab1,int *tab2, int *tab3, int n)
{
	int i;
	int *tab4=malloc(n*sizeof(int*));
	for (i=0;i<n;i++)
	{
		if (*tab1>=0) *(tab4+i)=*(tab2+i);
		else *(tab4+i)=*(tab3+i);
	}
	return tab4;
}

int main ()
{
	int a[4]={-1,-2,3,4},b[4]={1,3,5,7},c[4]={2,4,6,8},i;
	int *tab4=funk(a,b,c,4);
	for (i=0;i<4;i++) printf("%d",tab4[i]);
	return 0;
}
