int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    return (c);
}

#include <stdio.h>

int main()
{
    printf("%c\n", ft_toupper('b'));
    printf("%c\n", ft_toupper('Q'));
    printf("%c\n", ft_toupper(94));
}