#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;

	

	while (str[i])
	{

        i++;
	}
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i = 1;
        while(i < argc)
        {   
            str_capitalizer(argv[i]);
            i++;
        }
    }
    else 
        write(1,"\n",1);
}
