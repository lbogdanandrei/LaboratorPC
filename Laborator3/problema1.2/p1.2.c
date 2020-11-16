#include <stdio.h>

int main(void)
{
	double x;

	printf("x=");
	scanf("%lf",&x);

	if(x<=2)
	{
		printf("f(x)=%.2lf\n", x*x+3*x+5);
	}
	else if(x<8)
	{
		printf("f(x)=%.2lf\n", 3*x);
	}
	else
	{
		double e = 2.71, val=1;
		for(double i=1; i<=x; i++)
		{
			val = val * e;
		}
		printf("f(x)=%.2lf\n", val+2);
	}

	return 0;
}
