#include <unistd.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    int i=0, j=0, k=0;
    bool contains;

    if (argc == 3)
    {
        while(argv[1][i] != '\0')
        {
            contains = false;
            k = i - 1;

            while (k > 0)
            {
                if (argv[1][i] == argv[1][k])
                {
                    contains = true;
                    break;
                }
                k--;
            }
        
            if (contains)
            {
                i++;
                continue;
            }
        
            j = 0;
            while(argv[2][j] != '\0')
            {
                if (argv[1][i] == argv[2][j])
                {
                    write(1, &argv[2][j], 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
