#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    char	*array;
    size_t	i;

    if (!nmemb || !size)
        return (NULL);
    array = malloc(size * nmemb);
    if (!array)
        return (NULL);
    i = 0;
    while(i < nmemb * size)
    {
        array[i] = 0;
        i++;
    }
    return (array);
}

// #include <stdio.h>

// int main()
// {
//     int *tab;

//     tab = ft_calloc(5, sizeof(int));
//     int i = 0;
//     while(i < 5)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
// }