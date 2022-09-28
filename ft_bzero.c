#include <stdio.h>

char ft_bzero(void *s, size_t n)
{
    int i;
    char *str = (char *) s;

    i = 0;
    while (n--)
        str[i++] = '\0';
}
