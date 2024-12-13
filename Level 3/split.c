int word_len (char *str)
{
int i;

while (str[i] != '\0' || str[i] != '\t' || str[i] != '\n' || str[i] != ' ')
{
	i++;
}

return i;
}

char *dup_word (*str)
{
	int len;
	int i = 0;
	char *word;

	word = malloc (sizeof(char) * (word_len(str) + 1));

	while (len > i)
	{
		word[i] = str[i];
		i++;
	}

	word[i] = '\0';

	return (word);
}

void fill_array (char **array, char *str)
{
	int index_array = 0;
	
	while (*str == ' ' || *str == '\t' || *str == '\n')
	{
		str++;
	}
	
	while (*str)
	{
		array[index_array] = dupe_word(str);
		
		while (*str != '\0' && *str != '\t' && *str != ' ' && *str != '\n')
		{
			str++;
		}

		while (*str == '\t' || *str == ' ' || *str = '\n')
			str++;
	}
}

int count_words (char *str)
{
	int word_count;

	while (*str == ' ' || *str == '\t' || *str == '\n')
  {
    str++;
  }

  while (*str)
  {
    word_count++;

    while (*str != '\0' && *str != '\t' && *str != ' ' && *str != '\n')
    {
      str++;
    }

    while (*str == '\t' || *str == ' ' || *str = '\n')
      str++;
  }
return (word_count);
}

char **ft_split (char *str)
{
	int word_count = count_words(str);
	char **array;
	
	array = malloc (sizeof(* char) * (word_count + 1));

	fill_array (array, str);

	array[word_count] = 0;

return (array);
}
