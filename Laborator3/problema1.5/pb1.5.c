#include <stdio.h>

int main(void)
{
	double x, y;
	printf("x=");
	scanf("%lf", &x);
	printf("y=");
	scanf("%lf", &y);

	if(x==0)
	{
		if(y==0)
		{
			printf("Origine\n");
		}
		else if(y>0)
		{
			printf("1-2\n");
		}
		else
		{
			printf("3-4\n");
		}
	}
	else if(y==0)
	{
		if(x>0)
		{
			printf("1-4\n");
		}
		else
		{
			printf("2-3\n");
		}
	}
	else
	{
		if(x>0&&y>0)
		{
			printf("1\n");
		}
		else if(x<0&&y>0)
		{
			printf("2\n");
		}
		else if(x<0&&y<0)
		{
			printf("3\n");
		}
		else
		{
			printf("4\n");
		}
	}

	return 0;
}
