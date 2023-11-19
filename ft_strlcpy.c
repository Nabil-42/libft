#include <unistd.h>
#include <stdio.h>
#include <string.h>



size_t	ft_strlcpy(char *dest, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while(i < len - 1 && src[i] != '\0' )
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;

	while (src[i] != '\0')
	{
		++i;
	}
	return (i);
}

/*int main() {
    char source2[] = "Hello, World!";
    char destination[13];
    size_t max_len = sizeof(char)*13;

    size_t result = ft_strlcpy(destination, source2, max_len);

    printf("Resultat de ft_strlcpy : %s\n", destination);
    printf("Nombre de caracteres copiés : %d\n", result);

char source[] = "Hello, World!";
    char destination2[13];
    size_t max_len2 = sizeof(char)*13;

    size_t result2 = ft_strlcpy(destination2, source, max_len2);

    printf("Resultat de ft_strlcpy : %s\n", destination2);
    printf("Nombre de caracteres copiés : %d\n", result2);
    return 0;
}*/