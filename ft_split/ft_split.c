#include <stdlib.h>

char **ft_split(char *str)
{
	char **split;
	int i = 0;
	int j = 0;
	int k = 0;

	split = (char **)malloc(sizeof(char *) * 256);
	if (!split)
		return(0);
	
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;

	while(str[i])
	{
		j=0;
		split[k] = (char *)malloc(sizeof(char) * 4096);

		if(!(split[k]))
			return(0);
		
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			split[k][j] = str[i];
			j++;
			i++;
		}

		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;	

		split[k][j] = '\0';
		k++;
	}
	split[k] = '\0';
	return(split);
}
