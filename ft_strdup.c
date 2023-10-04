#include <stdlib.h>

char *ft_strdup(const char *s)
{
    int i;
    char *dup;

    i = 0;
    while(s[i])
        i++;
    dup = malloc(sizeof(char) * i + 1);
    if (!dup)
        return (NULL);
    i = 0;
    while(s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
}

// #include <stdio.h>

// int main()
// {
//     char *str = "Coucou ca va ?";
    
//     printf("%s", ft_strdup(str));
// }