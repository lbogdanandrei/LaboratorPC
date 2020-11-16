#include <math.h>
#include <stdio.h>

double f(double x)
{
	double rez;

	if(x<=2)
	{
		rez = x*x+3*x+5;
	}
	else if(x<8)
	{
		rez = 3*x;
	}	
	else
	{
		rez = pow(2.718, x)+2;
	}

	return rez;
}

double g(double x, double y)
{
	double rez;

	rez = 3*x*x + (sin(x)/pow(y, 1/4.));

	return rez;
}

void afis(int pas, double y)
{
	double i;

	printf("Valorile functiilor f si g pentru x din [0, 10] cu pasul %d\n", pas);

	for(i=0; i<=10; i += pas)
	{
		printf("f(%.lf, %.2lf)=%.2lf\ng(%.lf, %.2lf)=%.2lf\n\n", i, y, f(i), i, y, g(i, y));
	}
}
