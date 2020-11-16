#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, delta;

	printf("a=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf", &b);
	printf("c=");
	scanf("%lf", &c);

	delta =  b * b - 4 * a * c;

	if(delta<0)
	{
		printf("Nu se poate rezolva ecuatia\n");
	}
	else
	{
		printf("Radacinile sunt %.2lf si %.2lf\n", (-b+sqrt(delta))/2., (-b-sqrt(delta))/2.);
	}

	return 0;
}

