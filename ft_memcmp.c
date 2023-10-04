#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((int) ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
        i++;
    }
	return (0);
}

// int main()
// {
// 	char str[] = "Coucou";
// 	char cmp[] = "Coucoun";
	
// 	printf("%d", ft_memcmp(str, cmp, 0));
// }