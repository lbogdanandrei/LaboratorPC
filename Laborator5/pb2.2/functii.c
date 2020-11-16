int sumaDivizori(int x)
{
	int s, i;
	s=1;
	for(i=2; i<=x/2; i++)
	{
		if(x%i == 0)
		{
			s+=i;
		}
	}
	
	return s;
}

int suntPrietene(int x, int y)
{
	return sumaDivizori(x)==y && sumaDivizori(y)==x;
}
