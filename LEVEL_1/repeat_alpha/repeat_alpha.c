#include <unistd.h>

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return(c);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0, j = 0;
        char c;
        int repeat;

        char alphabet[] = "abcdefghijklmnopqrstuvwxyz";        

        while(argv[1][i])
        {
            c = to_lower(argv[1][i]);

            j = 0;
            while(alphabet[j])
            {
                if (c == alphabet[j])
                    repeat = j + 1;
                j++;
            }

            while(repeat > 0)
            {
                write(1,&argv[1][i],1);
                repeat--;
            }
            i++;
        }
    }
    write(1,"\n",1);
}
