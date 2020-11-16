#include <stdio.h>
#include "header.h"

int main(void)
{
	int x, y, opt, i;

	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);

	printf("\tMENIU\n");
	printf("0-Iesire\n");
	printf("1-Numere abundente\n");
	printf("2-Numere perfecte\n");
	printf("3-Numere deficiente\n");

	do
	{
		printf("Optiunea=");
		scanf("%d", &opt);

		if(opt == 1)
		{
			for(i=x; i<=y; i++)
			{
				if(tip(i)==1)
				{
					printf("%d\n", i);
				}
			}
		}
		else if(opt == 2)
		{
			for(i=x; i<=y; i++)
			{
				if(tip(i)==0)
				{
					printf("%d\n", i);
				}
			}
		}
		else if(opt == 3)
		{
			for(i=x; i<=y; i++)
			{
				if(tip(i)==-1)
				{
					printf("%d\n", i);
				}
			}
		}
	}while(opt != 0);
	
	return 0;
}	

