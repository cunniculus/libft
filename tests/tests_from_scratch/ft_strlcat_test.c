#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

int main (void)
{
	char src[] = "coucou";
	char dest[10];

	ft_memset(dest, 'A', 10);
	printf("%zu ", ft_strlcat(dest, src , 0));
	printf("%c\n", dest[0]);
	ft_memset(dest, 'A', 10);
	printf("%zu ", strlcat(dest, src, 0));
	printf("%c\n", dest[0]);

	ft_memset(dest, 'A', 10);
	printf("%zu ", ft_strlcat(dest, src , 0));
	printf("%c\n", dest[0]);
	ft_memset(dest, 'A', 10);
	printf("%zu ", strlcat(dest, src, 0));
	printf("%c\n", dest[0]);
}
