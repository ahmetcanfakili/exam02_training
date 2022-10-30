#include "stdio.h"

int counter(const char *str, const char c)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (counter(accept, s[i]) == 0)
			break;
		i++;
	}
	return(i);
}
