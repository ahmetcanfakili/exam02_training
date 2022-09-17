#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 1;
        int num1, num2, hdenom;
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);

        while(i <= num1 && i <= num2)
        {
            if (num1 % i == 0 && num2 % i == 0)
                hdenom = i;
            i++;
        }
        printf("%d", hdenom);
    }
    else    
        printf("\n");
}
