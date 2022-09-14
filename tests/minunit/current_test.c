#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"
#include <unistd.h>

int main ()
{
	unsigned char s[] = "\0";
	unsigned char *d;
	size_t	size = 1;
	size_t nmemb = 1;

	d = ft_calloc(nmemb, size);
	write (1, d, 1);
	write(1, "\n", 1);
	d = calloc(nmemb, size);
	write (1, d, 1);
	write(1, "\n", 1);
	printf("%d\n", ft_memcmp(d, s, 1));
	return (0);
}
