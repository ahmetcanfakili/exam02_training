#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 2;
        int arg = atoi(argv[1]);

        if (arg ==1)
 			printf("1");

        while(i <= arg)
        {
            if (arg % i == 0)
            {
                printf("%d", i);
                if (i == arg)
                    break;
                printf("*");
                arg /= i;
                i = 2;
            }
            i++;
        }
    }
    else   
        printf("\n");
}
