#include <unistd.h>

char helper(char arg)
{
    char *str;
    int i = 0;

    while(arg != '\0')
    {
        str[i] = arg;
        while(str[i])
        {

        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int i=0, j=0;
    char *str;

    if (argc == 3)
    {
        while(argv[1][i] != '\0')
        {
            j = 0;
            while(argv[2][j] != '\0')
            {
            
                if (argv[1][i] == argv[2][j])
                {
                    write(1, &argv[2][j], 1);
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
