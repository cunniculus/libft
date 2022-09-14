#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"
#include <unistd.h>

int main ()
{
	unsigned char s1[] = "abc";
	unsigned char s2[] = "def";

	strjoin(s1,s2);
	d = ft_calloc(nmemb, size);
	write (1, d, 1);
	write(1, "\n", 1);
	d = calloc(nmemb, size);
	write (1, d, 1);
	write(1, "\n", 1);
	printf("%d\n", ft_memcmp(d, s, 1));
	return (0);
}
