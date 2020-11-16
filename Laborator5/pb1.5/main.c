#include <stdio.h>
#include "header.h"

int main(void)
{
	int pas;
	double y;

	printf("y=");
	scanf("%lf", &y);
	printf("pas=");
	scanf("%d", &pas);

	afis(pas, y);

	return 0;
}
