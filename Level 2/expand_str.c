#include <unistd.h>

int skip_white (char *str, int i)
{
	while (str[i] == '\t' || str[i] == ' ')
	{
		i++;
	}

	return i;
}

int word_length (char *str)
{
	int i = 0;

	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
	{
		i++;
	}

	return i;
}

void expand_str (char *str)
{
	int first_word = 1;
	int word_len;
	int i = 0;

	i = skip_white (str,i);

	while (str[i])
	{
		if (first_word == 0)
		{
			write (1, "   ", 3);
		}
		word_len = word_length (str+i);

		write (1, str + i, word_len);

		i = i + word_len;

		first_word = 0;

		i = skip_white (str, i);
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str (argv[1]);
	}
	else
	{
		write (1, "\n", 1);
	}
	return 0;
}
