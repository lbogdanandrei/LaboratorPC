
int sumaDivizori(int x)
{
	int i, s;
	s=1;
	for(i=2; i<=x/2; i++)
	{
		if(x%i == 0)
		{
			s += i;
		}
	}

	return s;
}

int tip(int x)
{
	int r;

	if(sumaDivizori(x) > x)
	{
		r = 1;
	}
	else if(sumaDivizori(x) == x)
	{
		r = 0;
	}
	else
	{
		r = -1;
	}

	return r;
}
