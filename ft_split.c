#include <stdlib.h>

int count_words(char const *s, char c)
{
    int i;
    int pass;
    int nb;

    i = 0;
    pass = 1;
    nb = 0;
    while(s[i])
    {
        if (s[i] != c && pass == 1)
        {
            nb++;
			pass = 0;
		}
		if (s[i] == c)
			pass = 1;
		i++;
    }
	return (nb);
}

int next_string(char const *s, char c)
{
	int i;

	i = 0;
	while(s[i] != c && s[i])
		i++;
	return (i);
}

char *ft_strdup(const char *s, char *dup, char c, int len)
{
    int i;

    dup = malloc(sizeof(char) * len + 1);
    if (!dup)
        return (NULL);
    i = 0;
    while(s[i] && s[i] != c)
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
}

char **ft_split(char const *s, char c)
{
    char **splitter;
	int i;
	int	len;

	splitter = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!splitter)
		return (NULL);
	i = 0;
	len = 0;
	while(s[0])
	{
		if(s[0] != c)
		{
			len = next_string(s, c);
			splitter[i] = ft_strdup(s, splitter[i], c, len);
			i++;
			s += len;
		}
		s++;
	}
	splitter[i] = malloc(1);
	splitter[i][0] = 0;
	return(splitter);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Salut, comment, ca va ?";
// 	char **splitter = ft_split(str, ',');

// 	int i = 0;
// 	while(splitter[i])
// 	{
// 		printf("%s\n", splitter[i]);
// 		i++;
// 	}
// 	printf("%s", splitter[i]);
// 	i = 0;
// 	while(splitter[i])
// 	{
// 		free(splitter[i]);
// 		i++;
// 	}
// 	free(splitter[i]);
// 	free(splitter);
// }