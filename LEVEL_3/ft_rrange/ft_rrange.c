#include <stdlib.h>

int     *ft_rrange(int start, int end)
{

    int len, i=0;
    if (start < end)
        len = (end - start) + 1;
    else
        len = (start - end) + 1;

    int *array = (int *)malloc(sizeof(int) * len);

    len--;
    while(len >= 0)
    {
        array[len] = start;

        if (start < end)
            start++;
        else
            start--;
        len--;
    }
    return(array);
}
