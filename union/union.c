#include <unistd.h>
#include <stdbool.h>

void first_part(char **argv)
{
	bool dup;
	int i=0, k=0;
	while(argv[1][i])
	{
		dup = false;
		k = i-1;
		while(k>=0)
		{
			if (argv[1][i] == argv[1][k])
			{
				dup = true;
				break;
			}
			k--;
		}
		if (dup)
		{
			i++;
			continue;
		}	
		write(1,&argv[1][i],1);
		i++;
	}

}


int main(int argc, char **argv)
{
	if (argc == 3)
	{
		first_part(argv);
		two_part(argv);
	}
	write(1,"\n",1);
}

