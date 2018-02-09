#include <stdio.h>
#include <stdlib.h>

void funkcjon (double *wsk)
{
	free(wsk);
	wsk=NULL;
}

int main ()
{
	double a=324;
	double wsk=funkcjon(*a);
	if (wsk==NULL) printf ("NULL");
	else printf ("GIT");
	return 0;
}
