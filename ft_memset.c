#include <stdio.h>

void *ft_memset(void *s, int c, unsigned int n)
{
    unsigned char *p = s;
    while (n--)
    {
        *p++ = (unsigned char) c;
    }
    return (s);
}