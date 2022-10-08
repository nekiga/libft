#include <stdio.h>

unsigned int ft_strlcat(char *dst, const char *src, size_t size)
{
    // increment i to end of dst
    int    i;
    int    j;

    j = 0;
    i = 0;
    while (dst++)
        i++;
    // start copying from src to end of dest
    while (src[j++] && (j + i) <= size)
        dst[i++] = src[j];
    // null terminate string
    dst[i] = '\0';
    // return size of resulting string
    return (i);
    
    
}