#include <stdio.h>

size_t ft_strcspn(const char *s, const char *charset)
{
	size_t i = 0;
	size_t j = 0;
	while(s[i] != '\0')
	{
		j = 0;
		while(charset[j])
		{
			if (s[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
