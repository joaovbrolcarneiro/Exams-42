int     *ft_range(int start, int end)
{
	int size;
	int *res;
	int i = 0;
	size = abs (start - end) + 1;
	res = malloc (sizeof(int) * size);

	if (res == NULL)
	{
		return NULL;
	}
	if (start < end)
	{
		while (start <= end)
		{
		res[i] = start;
		start++;
		i++;
		}
	}
	else
	{
		while (start >= end)
		{
			res[i] = start;
			start--;
			i++;
		}
	}
return (res);
}
