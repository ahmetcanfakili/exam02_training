#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int start;
	int end;
    int flag = 0;

	if (argc > 1)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while(argv[1][i] && (argv[1][i] != ' ' &&  argv[1][i] != '\t'))
			i++;
		end = i;

        while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
        
        while(argv[1][i] != '\0')
        {   
            flag = 1;
            if (argv[1][i] != ' ' && argv[1][i] != '\t')
                write(1, &argv[1][i],1);

            if (argv[1][i] != ' ' && argv[1][i] != '\t' && (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t'))
                write(1," ",1);
            i++;
        }
        if (argv[1][i] == '\0' && flag)
            write(1," ",1);

        while(start < end)
        {
            write (1, &argv[1][start], 1);
            start++;
        }
	}	
	write (1, "\n",1);	
}
