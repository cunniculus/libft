#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

int main ()
{
	char s[] = "lorem ipsum dolor sit amet";
	char d[16];
	size_t	size = 5;

	memset(d, 0, 16);
	memset(d, 'r', 15);
	printf("Expected Return = %zu\ndst = %s\n", strlcat(d, s, size), d);

	memset(d, 0, 16);
	memset(d, 'r', 15);
	printf("Test Return = %zu\ndst = %s\n", ft_strlcat(d, s, size), d);

	return (0);
}
