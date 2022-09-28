#include <stdio.h>

int ft_isalpha(int c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
/*
int main(void)
{
    char c;
    c = '1';
    int res;
    res = ft_isalpha(c);
     printf("%d", res);
}
*/