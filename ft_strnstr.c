#include <unistd.h>
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	i = 0;
	j = 0;
	k = 0;
	while(ss1[i])
	{
		while(ss1[j + i] == ss2[j])
		{
			if(k == n)
				return (((char*)s1) + i);
			++j;
			++k;
		}
		++i;
		k = 0;
		j = 0;
	}
	return (NULL);
}

/*int	main()
{
	char	str[] = "ouais cousin ça dit quoi ma street ?";
	char	str2[] = "cousouiassdc";
	int	n;

	n = 3;
	printf("%s", ft_strnstr(str, str2, n));
}*/