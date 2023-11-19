#include <unistd.h>
#include <stdio.h>

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	i = 0;
	while(src[i] != c)
	{
		++i;
	}
	if(src[i] == c)
		return((char *)src + i);
	return(NULL);
}

/*int	main()
{
	const char	str[] ="ouais cousin";
	int	let;
	char	*j;

	let = 'i';
	j = ft_strchr(str, let);

	printf("%s", j);

}*/