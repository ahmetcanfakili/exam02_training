#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
 
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result * sign);
}

void print_num(int arg)
{
    char array[] = "0123456789";
    if (arg > 9)
        print_num(arg / 10);
    write(1,&array[arg % 10],1);
}

int print_prime_num(int num)
{
    bool control = true;
    int i = 2;
    while(i < num)
    {
        if (num % i == 0)
        {
            control = false;
            break;
        }
        i++;
    }
    if (control)   
        return(num);
    else
        return(0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        if (num > 0)
        {
            int ret;
            int sum = 0;
            int i = 2;
            while(i <= num)
            {
                ret = print_prime_num(i);
                if (ret)
                    sum += ret;
                i++;
            }
            print_num(sum);
        }
        else    
            write(1,"0",1);
    }
    else
        write(1,"0",1);
}
