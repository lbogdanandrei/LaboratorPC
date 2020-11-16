#include <math.h>
#include <stdio.h>

double mediaAritmetica(int a, int b, int c)
{
	double ma;

	ma = (a+b+c)/3.;

	return ma;
}

double mediaGeometrica(int a, int b, int c)
{
	double p;

	p = pow(a*b*c, 1/3.);

	return p;
}

int valMax(int a, int b, int c)
{
	int maxx;

	if(a>=b && a>=c)
	{
		maxx = a;
	}
	else if(b>=a && b>=c)
	{
		maxx = b;
	}
	else
	{
		maxx = c;
	}

	return maxx;
}

int valMin(int a, int b, int c)
{
	int minn;

	if(a<=b && a<=c)
	{
		minn = a;
	}
	else if(b<=a && b<=c)
	{
		minn = b;
	}
	else
	{
		minn = c;
	}

	return minn;
}

void afis(int min, int max, double ma, double mg)
{
	printf("Valoarea minima=%d\n", min);
	printf("Valoarea maxima=%d\n", max);
	printf("Media aritmetica=%.2lf\n", ma);
	printf("Media geometrica=%.2lf\n", mg);
}

