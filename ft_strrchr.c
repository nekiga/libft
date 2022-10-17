char *ft_strrchr(const char *s, int c)
{
    int i;
    char *p;

    i = 0;
    *p = *s;
    while (s[i] != '\0')
    {
        *p -= i;
        if (s[i] == c)
            {
             *p += i;
            }
    }
    return (*p);
}