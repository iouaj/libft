#include "libft.h"

int is_wspace(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
    {
        return (1);
    }
    return (0);
}

int is_nbr(char c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
}

int ft_atoi(const char *nptr)
{
    int i;
    int nbr;
    int sign;

    i = 0;
    nbr = 0;
    sign = 1;
    while (is_wspace(nptr[i]))
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (is_nbr(nptr[i]))
    {
        nbr = nbr * 10 + nptr[i] - 48;
        i++;
    }
    return (nbr * sign);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d", ft_atoi("       +4555 455"));
// }