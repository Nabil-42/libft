#include <unistd.h>
#include <stdio.h>

char	ft_toupper(char c)
{
	if(c <= 'z' && c >= 'a')
	{
		c = c - 32;
		return(c);
	}
	return(c);
}

/*int	main()
{
	char	a;

	a = 33;
	printf("%c", ft_toupper(a));
}*/