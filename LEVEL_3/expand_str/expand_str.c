#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2 && argv[1][i])
    {   
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;

        while(argv[1][i])
        {
            if (argv[1][i] >= 33 && argv[1][i] <= 126)
                write(1, &argv[1][i], 1);

            if (argv[1][i] == ' ' && (argv[1][i+1] >= 33 && argv[1][i+1] <= 126))
                write(1,"   ",3);
            i++;
        }
    }
    else   
        write(1, "\n", 1);
}
