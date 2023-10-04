#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

	i = 0;
	while(i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char *str1 = "Coucou";
// 	char *str2 = "Coucoun";

// 	printf("%d", ft_strncmp(str1, str2, 5));
// }