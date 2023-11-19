#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main()
{
	int	c;

	c = '1';
	if(ft_isalnum(c))
		printf("OUI le caractere est un num");
	else
		printf("NON le caractere n'est pas un num");
}