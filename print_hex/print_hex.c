#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    while(str[i])
    {
        if (str[i] >= 9 && str[i] <= 13)
            i++;
        
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                sign = -1;
            i++;
        }
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result * sign);
}

void print_hex(int arg)
{
    char arr[] = "0123456789abcdef";
    if (arg > 15)
        print_hex(arg / 16);
    write(1, &arr[arg % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        if (num >= 0)
            print_hex(num);
    }
    else   
        write(1, "\n", 1);
}
