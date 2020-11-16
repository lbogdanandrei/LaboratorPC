#include <stdio.h>

void f1(void)
{
	printf("Programul citeste un sir de numere care se termina cu valoarea 0\ncalculeaza suma termenilor sirului si o imparte la un numar y\n");
}

int suma(void)
{
	int s, var;
	s=0;

	printf("x=");
	scanf("%d", &var);
	
	while(var != 0)
	{
		s += var;

		printf("x=");
		scanf("%d", &var);
	}

	return s;
}

void afisare(int a)
{
	printf("Rezultatul este %d\n", a);
}

double rezultat(int s, int y)
{
	return s/(y*1.);
}

