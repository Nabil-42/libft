

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int	main()
{
	int	c;

	c = '_';
	if(ft_isalpha(c))
		printf("OUI le caractere est un alpha");
	else
		printf("NON le caractere n'est pas un alpha");
}*/