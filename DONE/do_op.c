#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 4)
    {
        if (argv[2][i] == '+')
            printf("%d", (atoi(argv[1]) + atoi(argv[3])));
        else if(argv[2][i] == '-')
            printf("%d", (atoi(argv[1]) - atoi(argv[3])));
        else if(argv[2][i] == '*')
            printf("%d", (atoi(argv[1]) * atoi(argv[3])));
        else if(argv[2][i] == '/')
            printf("%d", (atoi(argv[1]) / atoi(argv[3])));
        else if(argv[2][i] == '%')
            printf("%d", (atoi(argv[1]) % atoi(argv[3])));
    }
    printf("\n");
}
