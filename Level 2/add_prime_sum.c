#include <unistd.h>

int ft_atoi (char *str)
{
	int result = 0;

	int sign = 1;

	int i = 0;

	if (str[i] == '-' || str[i] == '+')
	{
	sign = -1;
	i++;
	}

	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (result * sign);
}

void putnbr (int n)
{
	char c;

	if (n >= 10)
	{
		putnbr (n/10);
	}

	c = n % 10 + '0';
	write (1, &c, 1);
}

int is_prime (int number)
{
	int i = 2;

	while (i < number)
	{
		if (number % i == 0)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int add_prime_sum (int n)
{
	int sum = 0;
	int i = 2;

	while (i <= n)
	{
		if (is_prime(i) == 1)
		{
			sum = sum + i;
		}
		i++;
	}
	return (sum);
}

int main (int argc, char **argv)
{
	if (argc == 2 && (ft_atoi(argv[1]) >= 0))
	{
		int n = ft_atoi(argv[1]);

		putnbr (add_prime_sum (n));
	  write (1, "\n", 1);
	}
	
	else 
	{
	write (1, "0", 1);
	write (1, "\n", 1);
	}

	return 0;
}
		

