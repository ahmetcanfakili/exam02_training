#include <unistd.h>

void print_num(int i)
{
    char arr[] = "0123456789";
    if (i > 9)
        print_num(i / 10);
    write(1, &arr[i % 10] , 1);
}

int main(void)
{
    int i = 1;

    while(i < 101)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1,"fizzbuzz\n",9);
        else if (i % 3 == 0)
            write(1,"fizz\n",5);
        else if (i % 5 == 0)
            write(1,"buzz\n",5);
        else    
        {
            print_num(i);
            write(1,"\n",1);
        }
        i++;
    }
}
