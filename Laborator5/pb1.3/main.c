#include <stdio.h>
#include "header.h"

int main(void)
{
	int sum, y;
	double rez;

	f1();
	sum = suma();
	afisare(sum);

	printf("y=");
	scanf("%d", &y);

	rez = rezultat(sum, y);
	printf("Rezultatul impartirii este %.2lf\n", rez);

	return 0;
}
	
