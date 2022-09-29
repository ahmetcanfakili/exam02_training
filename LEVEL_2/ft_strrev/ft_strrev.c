char *ft_strrev(char *str)
{
    int len = 0;
    char tmp = 0;
    int i = 0;

    while(str[len])
        len++;

    len -= 1;
    while(str[i] != '\0' && i < len)
    {   
            tmp = str[i];
            str[i] = str[len];
            str[len] = tmp;
            i++;
            len--;
    }  
    return (str);
}
