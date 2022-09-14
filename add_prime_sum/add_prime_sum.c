#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	while(argv[1][i])
	{
		if (argc != 2 && argv[1][i] < 48 && argv[1][i] > 57)
			write(1, "0\n", 1);
		i++;
	}



}

void is_prime_num(char **argv)
{
	int i=0, j=2;
	while(argv[1][i])
	{
		if (argv[1][i] = 0 || argv[1][i] = 1)
			write(1, "0\n", 1);
		i++;
	}



	while (i < argv[1][i])
	{
		

		i++;
	}	

}
