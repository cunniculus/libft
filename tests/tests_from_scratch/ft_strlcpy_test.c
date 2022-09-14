#include <stdio.h>
#include "libft.h"

int main (void)
{
	char src[] = "coucou";
	char dest[10];

	ft_memset(dest, 'A', 10);
	printf("%zu", ft_strlcpy(dest, src , 0));
	printf("%c\n", dest[0]);
}
