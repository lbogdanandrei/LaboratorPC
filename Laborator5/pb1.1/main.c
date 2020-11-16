#include <stdio.h>
#include "header.h"

int main(void)
{
	double a, x;
	
	printf("a=");
	scanf("%lf", &a);
	printf("x=");
	scanf("%lf", &x);

	printf("Inainte de apel:\na=%.2lf\nx=%.2lf\n", a, x);
	f1(a, x);
	printf("Dupa apel:\na=%.2lf\nn=%.2lf\n", a, x);

	return 0;
}
