#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len_src;

    i = 0;
    len_src = 0;
    while(src[len_src])
        len_src++;
    while(i < size && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return (len_src);
}