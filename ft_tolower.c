int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32);
    return (c);
}

#include <stdio.h>

int main()
{
    printf("%c\n", ft_tolower('b'));
    printf("%c\n", ft_tolower('Q'));
    printf("%c\n", ft_tolower(94));
}