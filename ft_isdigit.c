#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int	main()
{
	int	c;

	c = 't';
	if(ft_isdigit(c))
		printf("OUI le caractere est un digit");
	else
		printf("NON le caractere n'est pas un digit");
}*/