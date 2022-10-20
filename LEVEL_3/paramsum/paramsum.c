#include <unistd.h>

void print_num(int arg)
{
    char arr[] = "0123456789";
    if (arg > 9)
        print_num(arg / 10);
    write(1, &arr[arg % 10], 1);
}

int main(int argc, char **argv)
{
    (void)argv;
    if (argc > 1)
    {
        int arg;
        arg = argc - 1;
        print_num(arg);
    }
    else
        write(1, "0\n", 1);
}
