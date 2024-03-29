#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *join;
    int i;
    int j;

    join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!join)
        return (NULL);
    i = 0;
    while(s1[i])
    {
        join[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j])
    {
        join[i + j] = s2[j];
        j++;
    }
    join[i + j] = 0;
    return (join);
}

// #include <stdio.h>

// int main()
// {
//     char s1[] = "Coucou ";
//     char s2[] = "ca va ?";

//     printf("%s", ft_strjoin(s1, s2));
// }