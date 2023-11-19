#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}

/*int	main()
{
	int	c;

	c = 32;
	if(ft_isprint(c))
		printf("OUI le caractere est un print");
	else
		printf("NON le caractere n'est pas un print");
}*/