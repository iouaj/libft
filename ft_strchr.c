#include <string.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != c && s[i])
        i++;
    if (!s[i])
        return (NULL);
    return ((char *) s + i);
}

// #include <stdio.h>

// int main()
// {
//     char str[] = "Coucou";

//     printf("%s", ft_strchr(str, 'u'));
// }