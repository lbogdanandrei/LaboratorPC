#include <stdio.h>

int main(void)
{
	int H, M, S, h, m, s, ziUrm, ore, minute, secunde;

	printf("Momentul de conectare:\n\n");
	printf("Ora:");
	scanf("%d", &H);
	printf("Minutul:");
	scanf("%d", &M);
	printf("Secunda:");
	scanf("%d", &S);

	printf("\nMomentul de deconectare:\n\n");
	printf("Ora:");
	scanf("%d", &h);
	printf("Minutul:");
	scanf("%d", &m);
	printf("Secunda:");
	scanf("%d", &s);

	printf("\nDeconectarea se realizeaza in ziua urmatoare?(1-Da, 0-Nu)");
	scanf("%d", &ziUrm);

	if(ziUrm==1)
	{
		ore = 23 - H + h;
		minute = 59 - H + m;
		secunde = 59 - S + s;
		minute = minute + secunde/60;
		secunde = secunde % 60;
		ore = ore + minute/60;
		minute = minute % 60;

		printf("%d:%d:%d\n", ore, minute, secunde);
	}
	else if(ziUrm==0)
	{
		ore = h - H;
		minute = (m>M) ? (m-M) : (M-m);
		secunde = (s>S) ? (s-S) : (S-s);

		printf("%d:%d:%d\n", ore, minute, secunde);
	}
	else
	{
		printf("Zi necunoscuta");
	}

	return 0;
}
		
