#include <stdio.h>

void *ft_memset(void *s, int c, unsigned int n)
{
    // converting void pointer to unsigned char pointer
    unsigned char *p = s;
    // Setting each member of p to c, while decrementing n
    while (n--)
    {
        *p++ = c;
    }
    // returns the now changed array
    return (s);
}