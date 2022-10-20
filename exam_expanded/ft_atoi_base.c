char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return(c - 32);
    return(c);
}

int base(char c, int str_base)
{
    const char *str = "0123456789ABCDEF";

    int i = 0;
    while(i < str_base)
    {   
        if (str[i] == c)
            return(i);
        i++;
    }
    return(42);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int result = 0;
    int digit;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    while(*str && *str != ' ')
    {
        digit = base(to_upper(*str), str_base);
        if (digit != 42)
            result = (result * str_base) + digit;
        str++;
    }
    return(sign * result);
}
