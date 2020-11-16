int esteTriunghi(int a, int b, int c)
{
	int toReturn;
	toReturn = 1;

	if(a+b<c || a+c<b || b+c<a)
	{
		toReturn = 0;
	}

	return toReturn;
}

int esteTriunghiEchilateral(int a, int b, int c)
{
	return a==b && b==c;
}

int esteTriunghiIsoscel(int a, int b, int c)
{
	return a==b || a==c || b==c;
}

int esteTriunghiDreptunghic(int a, int b, int c)
{
	return (a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a);
}	
