#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*int	main()
{
	char	str[] = "hello  	world !";

	printf("%d", ft_strlen(str));
}*/