#include <unistd.h>

int atoi(char *str)
{
	int sign = 1;
	int i = 0;
	int result = 0;

	while(str[i] == ' ' ||  (str[i] >= 9 && str[i] <= 13))
		i++;
	
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}

void print_num(int arg)
{
	char arr[] = "0123456789";
	if (arg > 9)
		print_num(arg / 10);
	write(1, &arr[arg % 10], 1);
}

//asalsa sayıyı, değilse 0 döner
int is_prime(int num)
{
	int i = 2;
	while(i < num)
	{
		if (num % i == 0)
		{
			return (0);
			break;
		}
		else
			return(num);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int sum = 0;
		int i = 2;
		int num = atoi(argv[1]);
		if (num < 0)
		{
			write(1, "0\n", 2);
			
		}
		while(i <= num)
		{
			if (is_prime(i) != 0)
				sum += i;
			i++;
		}
		print_num(sum);
	}
	else
		write(1,"0\n",2);
	return (0);
}
