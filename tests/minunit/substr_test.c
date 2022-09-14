#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"
#include <unistd.h>

int main ()
{
	char s[] = "furacao";
	char *d;
	size_t	size = 3;
	size_t 	start = 4;

	d = ft_substr(s, start, size);
	write (1, d, 3);
	write(1, "\n", 1);
	
	free(d);

	return (0);
}
