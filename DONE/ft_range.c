#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int len;
    int *array;
    int i = 0;

    if (start > end)
        len = (start - end) + 1;
    else    
        len = (end - start) + 1;

    array = (int *)malloc(sizeof(int) * len);
    if (array == NULL)
        return(NULL);

    while(i < len)
    {
        array[i] = start;

        if (start > end) 
            start--;
        else
            start++;
        i++;
    }
    return(array);
}
