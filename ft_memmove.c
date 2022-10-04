#include <stdio.h>

void *ft_memmove(void *src, void *dest, size_t n)
{
    //type casting the pointers into char
    char *csrc = (char *) src;
    char *cdest = (char *) dest;
    // declaring temp array
    char *temp = malloc(n);
    int i;

    i = 0;
    //copying from src to temp
    while (i++ != n)
        temp[i] = csrc[i];
    // now copying from temp to dest
    i = 0;
    while (i++ != n)
        cdest[i] = temp[i];
    return (*temp);
}