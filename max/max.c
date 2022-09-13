#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;
	
	if (tab[i] && !tab)
	{
		int max;
		
		max = tab[i];
		while(i < len)
		{
			if (tab[i] > max)
				max = tab[i];
			i++;
		}
		return(max);
	}
	return (0);
}

int main()
{
	int	tab[] = {}; // ??
	printf("max : %d\n", max(tab, 7));
	return (0);
}