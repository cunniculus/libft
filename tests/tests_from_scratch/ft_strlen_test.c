#include <stdio.h>
#include <string.h>

#include "libft.h"
#include "libft_test.h"

void ft_strlen_test()
{
	printf("ft_strlen:\n");

	printf("01 ");
	printf("%s\n", strlen(NULL));
	printf("%s\n", ft_strlen(NULL));
}
