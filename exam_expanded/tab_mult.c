#include <unistd.h>

int	ft_atoi(const char *str)
{
    int result=0, sign;

    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;    
        str++;
    }
    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - 48;
        str++;
    }
    return(result * sign);
}

void print_num(int arg)
{
    char arr[] = "0123456789";
    if (arg > 9)
        print_num(arg / 10);
    write(1, &arr[arg % 10], 1);
}

int main(int argc, char **argv)
{

    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        int res = 0;
        int i = 1;
        
        if (num > 0)
        {
            while(i < 10)
            {
                res = i * num;
                print_num(i);
                write(1," x ",3);
                print_num(num);
                write(1," = ",3);
                print_num(res);
                write(1, "\n", 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}