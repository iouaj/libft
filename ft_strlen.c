#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    if (!s)
        return (0);
    while(s[i])
        i++;
    return (i);
}

#include <stdio.h>

int main() {
    char *s = "test";
    printf("%d", ft_strlen(s));
}