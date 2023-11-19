#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	size_t	i;

	i = 0;
	while(str[i] != '-' || str[i]  )
	while(str[i])
	{
		
	}
}

int	main()
{
	char	str[] = "   --1234  ouoy  123456";

	printf("%d\n", atoi(str));
	printf("%d", ft_atoi(str));
}