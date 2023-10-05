#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char temp[n];

    i = 0;
    while(i < n)
    {
        temp[i] = ((unsigned char * )src)[i];
        i++;
    }
    i = 0;
    while(i < n)
    {
        ((unsigned char * )dest)[i] = ((unsigned char * ) temp)[i];
        i++;
    }
    return (dest);
}