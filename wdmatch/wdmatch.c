#include <unistd.h>
#include <stdio.h>

int ft_strlen(char **argv)
{
	int i = 0;
	while (argv[1][i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i=0, j=0, k=0;

	char output[ft_strlen(argv)];
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				write(1, &output[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}
