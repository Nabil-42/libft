#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    const unsigned char   *src2;
    unsigned char *dest2;
    unsigned char   *buffer;

    i = 0;
    buffer = malloc(sizeof(char)*n);
    src2 = (const unsigned char *)src;
    dest2 = (unsigned char *)dest;
    while(i < n)
    {
        buffer[i] = src2[i];
        dest2[i] = buffer[i];
        ++i;
    }
    return(dest);
}

/*int main()
{
    char    str[] = "ouais cousin bien ou quoi ?";
    char    *desti1;
    char    *desti2;
    char    *result1;
    char    *result2;

    desti1 = malloc(sizeof(char)*(strlen(str)+1));
    desti2 = malloc(sizeof(char)*strlen(str));
    result1 = ft_memmove(desti1, str, strlen(str)+1);
    printf("%s\n", result1);
    result2 = memmove(desti2, str, strlen(str));
    printf("%s", result2);
} */

/*int main() {
    // Exemple 1 : Copie de mémoire sans chevauchement
    char str1[] = "Hello, World!";
    char buffer1[20];

    ft_memmove(buffer1, str1, 13);
    printf("Exemple 1 - Copie sans chevauchement : %s\n", buffer1);

    // Exemple 2 : Copie de mémoire avec chevauchement (source avant cible)
    char str2[] = "Bonjour, le monde!";
    char buffer2[20];

    ft_memmove(buffer2, str2, 13);
    printf("Exemple 2 - Copie avec chevauchement (source avant cible) : %s\n", buffer2);

    // Exemple 3 : Copie de mémoire avec chevauchement (cible avant source)
    char str3[] = "Ceci est un exemple";
    char buffer3[20];

    memmove(buffer3 + 5, str3, 13);
    printf("Exemple 3 - Copie avec chevauchement (cible avant source) : %s\n", buffer3);

char str[] = "Hello, World!";
    char buffer[20];

    memset(buffer, 0, sizeof(buffer)); // Initialise le tampon avec des zéros
    memcpy(buffer, str, 13);
    printf("Exemple - Copie sans chevauchement : %s\n", buffer);
}*/