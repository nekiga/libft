#include <stdio.h>

void *ft_memcpy(const void *src,void *dest, size_t n)
{   
    //type casting the pointers into char
    char *cdest = (char *) dest;
    char *csrc = (char *) src; 
    int i;

    i = 0;
    //copying from src to temp
    while (i++ != n)
        cdest[i] = csrc[i];
}