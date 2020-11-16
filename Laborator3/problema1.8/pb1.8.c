#include "header.h"

_Bool esteTriunghi(int a, int b, int c)
{
	return (a+b>c && a+c>b && b+c>a);
}

_Bool esteTriunghiEchilateral(int a, int b, int c)
{
	return (a==b && b==c);
}

_Bool esteTriunghiIsoscel(int a, int b, int c)
{
	return (a==b || a==c || b==c);
}

_Bool esteTriunghiDreptunghic(int a, int b, int c)
{
	return (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b);
}
