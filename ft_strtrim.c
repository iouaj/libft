#include <stdlib.h>

int is_inset(char const *set, char c)
{
	int i;

	i = 0;
	while(set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int ft_strlen(char const *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int		i;
	int		j;
	int		len;
    char	*trim;

	i = 0;
	len = ft_strlen(s1);
	while(is_inset(set, s1[i]))
		i++;
	while (is_inset(set, s1[len-1]))
		len--;
	trim = malloc(sizeof(char) * (len - i + 1));
	if (!trim)
		return (NULL);
	j = 0;
	while (i < len)
	{
		trim[j] = s1[i];
		j++;
		i++;
	}
	trim[j] = 0;
	return (trim);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "**************************************************************************,,,,///Ceci est un / test**************,,,,";
// 	printf("%s", ft_strtrim(str, "*/,"));
// }