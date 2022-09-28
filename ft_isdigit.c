#include <stdio.h>
int ft_isdigit(int c)
{
    if (c >= 0 && c <= 9)
        return (1);
    else
        return (0);
}
/*
int main(void)
{
    int n;
    n = 1;
    int res;
    res = ft_isdigit(n);
     printf("%d", res);
}
*/