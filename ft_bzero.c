#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char   *buc;

    buc = s;
    i = 0;
    while(i < n)
    {
        buc[i] = 0;
        ++i;
    }
}

/*int main()
{
    char    str[] = "ABCD EFGH";

    ft_bzero(str+5,sizeof(char) * 10);

    printf("%s", str);
}*/