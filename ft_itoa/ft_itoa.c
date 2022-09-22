#include <stdlib.h>
#include <stdio.h>

int len(int arg)
{
    int len = 0;
    int num_tmp = arg;

    if (num_tmp == 0)
        len = 1;

    if (num_tmp < 0)
    {
        len++;
        num_tmp *= -1;
    }

    while (num_tmp > 0)
    {
        num_tmp /= 10;
        len++;
    }
    return(len);
}

char	*ft_itoa(int nbr)
{
    char *str;
    int length = len(nbr);
    int num_tmp = nbr;

    str = (char *)malloc(sizeof(char) * (length + 1));
    if (!str)
        return(0);

    str[length] = '\0';

    if (num_tmp == 0)
    {
        str[0] = '0';
        return (str);
    }

    if (num_tmp < 0)
    {
        num_tmp *= -1;
        str[0] = '-';
    }

    length--;
    while (num_tmp > 0)
    {
        str[length] = (num_tmp % 10) + 48;
        num_tmp /= 10;
        length--;
    }
    return(str);
}

int main()
{
    char *str = ft_itoa(0);
    printf("%s", str);
}
