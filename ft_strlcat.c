#include <unistd.h>
#include <stdio.h>
#include <string.h>



size_t	ft_strlcat( char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;
	size_t	j;
	size_t	k;

	i = 0;
	len = 0;
	j = 0;
	k = 0;
	while( len < n -1 && src[len])
	{
		++len;
	}

	while(dest[i])
	{
		++i;
	}
	j = i;
	while(i < n  && src[k])
	{
		dest[i] = src[k];
		++i;
		++k;
	}
	dest[i] = 0;
	
	return(len + j);
}

/*int	main()
{
	const char	src[] = "ouais";
	char	dest[] = "cousin";

	printf("%d \n %s", ft_strlcat(dest, src, sizeof(char) * 10), dest);

}*/