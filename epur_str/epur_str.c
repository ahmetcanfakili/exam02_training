#include <unistd.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        bool cont = false;
        int i = 0;
        while(argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13))
            i++;

        while(argv[1][i])
        {
            if (argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13))
                cont = true;

            if (!(argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13)))
            {
                if (cont)
                {
                    
                }
            }

            i++;

        }



    }
    write(1, "\n", 1);
}