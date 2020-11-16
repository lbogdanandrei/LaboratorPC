#include <stdio.h>

int main(void)
{
	double a, b, rezultat;
	int optiune;

	printf("a=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf", &b);

	printf("   MENIU\n");
	printf("1->Suma numerelor\n");
	printf("2->Diferenta numerelor\n");
	printf("3->Produsul numerelor\n");
	printf("4->Impartirea numerelor\n");
	printf("Optiunea aleasa:");
	scanf("%d", &optiune);

	switch(optiune)
	{
		case 1:
			rezultat = a+b;
			break;
		case 2:
			rezultat = a-b;
			break;
		case 3: 
			rezultat = a*b;
			break;
		case 4: 
			rezultat = a/b;
			break;
		default:
			printf("Optiune invalida\n");
			return 0;
	}

	printf("Rezultatul optiunii %d este %.2lf\n", optiune, rezultat);
	
	return 0;
}
