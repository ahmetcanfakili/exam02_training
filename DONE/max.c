int max(int *tab, unsigned int len)
{
	int result;
	unsigned int i = 0;
	result = tab[0];
	
	while(i < len)
	{
		if (result <  tab[i])
		{
			result = tab[i];
		}
		i++;
	}
	return result;
}
