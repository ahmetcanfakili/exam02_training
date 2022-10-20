#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int start, end;

        while(argv[1][i] != '\0')
            i++;
        
        while (i >= 0) 
        {
            while(argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
                i--;
            end = i;

            while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                i--;
            start = i + 1;

            while(start <= end)
            {   
                write(1, &argv[1][start], 1);
                start++;
            }
            if (i < 0)
                break;
            write(1," ",1);
        }
    }
    else    
        write(1, "\n", 1);
}
