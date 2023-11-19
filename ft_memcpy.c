#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char   *buc;
    const unsigned char   *puc;

    buc = (unsigned char   *)dest;
    puc = (const unsigned char   *)src;
    i = 0;
    while (i < n)
    {
        buc[i] = puc[i];
        ++i;
    }
    return(dest);
}

int main()
{
    char    str[] = "Hello World !";
    char    dest[4];
   

    
    //dest = malloc(sizeof(char)* 20);
    ft_memcpy(dest, str, sizeof(char)*4);
    printf("%s\n", dest);
    memcpy(dest, str, sizeof(char) *4);
    printf("%s\n", dest);
    memset(dest,0, sizeof(char) *4);
    memcpy(dest, str, sizeof(char) *4);
    printf("%s", dest);
}

/*int main()
{
    char    str[] = "Hello World !";
    char    dest[5];
   

    

    memcpy(dest, str, sizeof(char) *5);
    printf("%s", dest);
}*/