#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    unsigned char *buc;

    buc = (unsigned char*)b;
    i = 0;
    while(i < len)
    {
        buc[i] = c;
        ++i;
    }
    return (b);
}

int main()
{
    int str[3];
    size_t  j;

    memset(str, 'x', sizeof(char) * 1);
        printf("%s", str);
  ft_memset(str+1, 'a', sizeof(char) * 3);
        printf("%s", str);
}