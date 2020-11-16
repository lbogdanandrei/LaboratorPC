#include <stdio.h>
#include "header.h"

int main(void)
{
	int a, b, c;

	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("c=");
	scanf("%d", &c);

	if(esteTriunghi(a, b, c))
	{
		if(esteTriunghiEchilateral(a, b, c))
		{
			printf("Este triunghi echilateral\n");
		}
		else if(esteTriunghiIsoscel(a, b, c))
		{
			printf("Este triunghi isoscel\n");
		}
		if(esteTriunghiDreptunghic(a, b, c))
		{
			printf("Este triunghi dreptunghic\n");
		}
	}
	else
	{
		printf("Nu este triunghi\n");
	}

	return 0;
}
