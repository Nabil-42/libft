#include <unistd.h>
#include <stdio.h>

char	*ft_strrchr(const char *src, int c)
{
	size_t	len;

	len = 0;
	while(src[len])
	{
		len++;
	}
	while(src[len] != c && len != 0 )
	{
		len--;
	}
	if(src[len] == c)
		return((char *)src + len);
	return(NULL);
}

/*int	main()
{
	const char	str[] ="zbouais cousin";
	int	let;
	char	*j;

	let = 'z';
	j = ft_strrchr(str, let);

	printf("%s", j);

}*/

