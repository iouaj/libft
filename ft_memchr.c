#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while(((unsigned char *) s)[i] != c && i < n)
        i++;
    if (i == n)
        return (NULL);
    return (((unsigned char *)s) + i);
}