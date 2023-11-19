#include <unistd.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(i <= n )
	{
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
			return(((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		++i;
	}
	return(0);
	
}


/*int	main()
{
	const char	str[] ="Bbouais cousin";
	const char	str2[] ="Bbouais cousin";
	
	
	int	n;

	n = 500;
	printf("%d", ft_memcmp(str, str2, n));
	printf("%d", ft_mmemcmp(str, str2, n));
	

	
}*/
