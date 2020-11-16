#include <stdio.h>

int main(void)
{
	int H, M, S, h, m, s, ziUrm=0;

	printf("Momentul de conectare:\n\n");
	printf("Ora:");
	scanf("%d", &H);
	printf("Minutul:");
	scanf("%d", &M);
	printf("Secunda:");
	scanf("%d", &S);

	printf("\nDurata conexiunii:\n\n");
	printf("Ore:");
	scanf("%d", &h);
	printf("Minute:");
	scanf("%d", &m);
	printf("Secunde:");
	scanf("%d", &s);

	S += s;
	M += S / 60;
	S %= 60;
	M += m;
	H += M / 60;
	M %= 60;
	H += h;
	if(H >= 24)
	{
		H %= 24;
		ziUrm = 1;
	}
	if(ziUrm==1)
	{
		printf("Conexiunea se incheie ziua urmatoare la ora %d:%d:%d\n", H, M, S);
	}
	else
	{
		printf("Conexiunea se incheie in aceeasi zi la ora %d:%d:%d\n", H, M, S);
	}

	return 0;
}
		
