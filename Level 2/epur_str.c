#include <unistd.h>

int skip_white (char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	return i;
}

int ft_word_len (char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		i++;
	}

	return i;
}

void epur_str (char *str)
{
	int i = 0;
	int first_word = 1;
	int word_len;

	i = skip_white (str, i);
while (str[i])
		{
	if (first_word == 0)
	{
		write (1, " ", 1);
	}

	word_len = ft_word_len (str + i);

	write (1, str + i, word_len);

	i = word_len + i;

	first_word = 0;
	
	i = skip_white (str, i);
		}
}
