#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s,  int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        *s++;
        if (s[i] == c)
            return (s);
        i++;
    }
    return (NULL);
}

/*int main(void)
{
   const char *s = "Hello";
    int c = 108;

    char *p1 = ft_strchr(s, c);
    char *p2 = strchr(s, c);
    
    printf("Mine: %p\n", p1);
    printf("Actual: %p\n", p2);

}*/