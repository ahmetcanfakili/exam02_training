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
    print_num(argc - 1);
    write(1, "\n", 1);
    return(0);
}
