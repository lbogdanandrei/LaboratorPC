#include <stdio.h>

int main(void)
{
	int a, b, c, maxx;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("c=");
	scanf("%d", &c);

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

	printf("Maximul este %d\n", maxx);

	return 0;
}
