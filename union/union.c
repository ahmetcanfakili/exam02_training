#include <unistd.h>

int check(char *str, int pos, char c)
{
    int i = 0;
    while(i < pos)
    {
        if (str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

void ft_union(char *str1, char *str2)
{
    int i=0, j=0;

    while(str1[i])
    {
        if (!check(str1, i, str1[i]))
            write(1, &str1[i], 1);
        i++;
    }

    while(str2[j])
    {
        if (!check(str2, j, str2[j]) && !check(str1, i, str2[j]))
            write(1, &str2[j], 1);
        j++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    else
        write(1, "\n", 1);
}
