#include <unistd.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	unsigned char *strr;

	i = 0;
	strr = (unsigned char*)str;
	while(i <= n || strr[i])
	{
		if(strr[i] == (unsigned char)c)
			return(strr + i);
		++i;
	}
	return(NULL);
	
}



/*int	main()
{
	const char	str[] ="Bbouais cousin";
	int	let;
	int	*ptr;
	int	n;

	n = 100;
	let = 'a';
	ptr = ft_memchr(str, let, n);
	*ptr = 'H';

	printf("%s",str);
}*/
