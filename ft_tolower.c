#include <stdio.h>
#include <unistd.h>

char	ft_tolower(char c)
{
	if(c <= 'Z' && c >= 'A')
	{
		c = c + 32;
		return(c);
	}
	return(c);
}
	