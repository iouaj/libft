#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *mapi;
    unsigned int    i;
    
    mapi = malloc(sizeof(char) * ft_strlen(s));
    i = 0;
    while(s[i])
    {
        mapi[i] = f(i, s[i]);
        i++;
    }
    mapi[i] = 0;
    return (mapi);
}