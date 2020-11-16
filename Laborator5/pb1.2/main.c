#include <stdio.h>
#include "header.h"

int main(void)
{
	int a, b, c, minim, maxim;
	double mediaAritm, mediaGeom;

	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("c=");
	scanf("%d", &c);
	
	minim = valMin(a, b, c);
	maxim = valMax(a, b, c);
	mediaAritm = mediaAritmetica(a, b, c);
	mediaGeom = mediaGeometrica(a, b, c);

	afis(minim, maxim, mediaAritm, mediaGeom);

	return 0;
}

