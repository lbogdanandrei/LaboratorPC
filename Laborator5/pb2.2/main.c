#include <stdio.h>
#include "header.h"

int main(void)
{
	int x, y, i, j, ok;

	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);

	ok = 0;

	for(i=x; i<y; i++)
	{
		for(j=x+1; j<=y; j++)
		{
			if(suntPrietene(i, j)&&i<j)
			{
				ok = 1;
				printf("Numerele %d si %d sunt prietene\n", i, j);
			}
		}
	}

	if(!ok)
	{
		printf("Nu exista numere prietene in interval\n");
	}
	
	return 0;
}
