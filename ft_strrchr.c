#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    while(s[i] != c && i)
        i--;
    if (!i)
        return (NULL);
    return ((char *) s + i);
}

// #include <stdio.h>

// int main()
// {
//     char str[] = "Coucou";

//     printf("%s", ft_strrchr(str, 'c'));
// }