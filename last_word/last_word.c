#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 9 && argv[1][i] <= 13)
				i++;
			
		}		



	}
	write(1, "\n", 1);
}
