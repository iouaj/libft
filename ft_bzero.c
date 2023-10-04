#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
    while (i < n)
    {
        printf("\nBien dedans");
        ((unsigned char *) s)[i] = (unsigned char) 0;
        printf("\nBien passé");
        i++;
    }
}