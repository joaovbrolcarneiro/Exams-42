int     *ft_rrange(int start, int end)
{
	int i = 0;
	int *res;
	int size;

	size = abs (end - start) + 1;

	res = malloc (sizeof(int) * size);

	if (start <= end)
	{
		while (start <= end)
		{
			res[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			res[i] = end;
			end++;
			i++;
		}
	}
	return res;
}

