#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i <= n)
	{
		if(s1[i] != s2[i])
			return(s1[i] - s2[i]);
		++i;	
	}
	return(s1[i] - s2[i]);
}

/*int	main()
{
	const char	str[] ="bouais cousin";
	const char	str2[] ="bouais cousin";
	int	let;

	let = 5;
	printf("%d",ft_strncmp(str, str2, let));

}*/
