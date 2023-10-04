#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t  i;

	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while(s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = 0;
	return (substr);
}

// #include <stdio.h>

// int main()
// {
// 	char *str = "Yo salut ca va ?";
// 	char *sub = ft_substr(str, 15, 8);

// 	printf("%s", sub);
// 	free(sub);
// }