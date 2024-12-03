int isvalid (char c, int base)
{
	char digits[] = "0123456789abcdef";
	char digits2[] = "0123456789ABCDEF";

	while (base--)
	{	
	if (digits[base] == c || digits2[base] == c)
		{
			return 1;
		}
	}
	return 0;
}

int value_of (char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
	{
		return (c - 'a' + 10);
	}
	if (c >= 'A' && c <= 'F')
  { 
    return (c - 'A' + 10);
  } 
}

int ft_atoi_base (char *str, int str_base)
{
	int result = 0;

	int sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		str++;
	}

	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}

	while (isvalid (*str, str_base))
		{
			result = result * str_base + value_of;
			str++;
		}
	return (result * sign)
}


