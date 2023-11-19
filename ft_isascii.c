#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}

/*int	main()
{
	int	c;

	c = 12;
	if(ft_isascii(c))
		printf("OUI le caractere est un ASCII");
	else
		printf("NON le caractere n'est pas un ASCII");
}*/